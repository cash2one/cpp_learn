#include "thread_pool.h"
#include <iostream>

namespace tool {
template<typename T>
void SyncQueue<T>::put(T &t) {
  std::lock_guard<std::mutex>lock(mutex_);
  queue_.push_back(t);
  cv_empty_.notify_one();
}

template<typename T>
void SyncQueue<T>::take(T &t) {
  std::lock_guard<std::mutex>lock(mutex_);
  cv_empty_.wait(mutex_, [this]() {return !queue_.empty() || !run_;});
  if (!run_) {
    return;
  }
  t = std::move(queue_.back());
  queue_.pop_back();
}

template<typename T>
void SyncQueue<T>::stop() {
  run_ = false;
}

template<typename T>
void SyncQueue<T>::take(std::list<T> &t_list) {
  std::lock_guard<std::mutex>lock(mutex_);
  cv_empty_.wait(mutex_, [this]() {return !queue_.empty() || !run_;});
  if (!run_) {
    return;
  }
  t_list = std::move(queue_);
}
void ThreadPool::add(Task &task) {
  queue_.put(task);
}

void ThreadPool::stop() {
  run_ = false;
  queue_.stop();
  queue_.cv_empty_.notify_all();
  for (auto &t : threads_) {
    t.join();
  }
}

void ThreadPool::start() {
  for (int i = 0; i < thread_num_; i++) {
    threads_.push_back(std::move(std::thread(&ThreadPool::thread_run, this)));
  }

}

void ThreadPool::thread_run() {
  std::cout << "thread run" << std::endl;
  while (run_) {
    Task task;
    queue_.take(task);
    if (task) {
      task();
    }
  }
}
}// namespace tool
