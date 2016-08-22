#include "thread_pool.h"

namespace tool {
template<typename T>
void SyncQueue<T>::put(T && t) {
    std::lock_guard<std::mutex>lock(mutex_);
    queue_.push_back(std::forward<T>(t));
    cv_empty_.notify_one();
}

template<typename T>
void SyncQueue<T>::take(T &t) {
    std::lock_guard<std::mutex>lock(mutex_);
    cv_empty_.wait(mutex_, [this]() {return !queue_.empty();});
    t = std::move(queue_.back());
    queue_.pop_back();
}

template<typename T>
void SyncQueue<T>::take(std::list<T> &t_list) {
    std::lock_guard<std::mutex>lock(mutex_);
    cv_empty_.wait(mutex_, [this]() {return !queue_.empty();});
    t_list = std::move(queue_);
}

void ThreadPool::start() {
    for (int i = 0; i < thread_num_; i++) {
        threads.push_back(std::move(std::thread(&ThreadPool::thread_run, this)));
    }

}

    void ThreadPool::thread_run() {
        while (true) {
        Task task;
        queue_.take(task);
        task();
        }
    }
}// namespace tool
