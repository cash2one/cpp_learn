#pragma once
#include <thread>
#include <list>
#include <mutex>
#include <condition_variable>
#include <utility> //std::forward move
#include <functional> //std::function
#include <vector>

namespace tool {
template<typename T>
class SyncQueue {
 public:
  friend class ThreadPool;
  SyncQueue():run_(true) {}

  void put(T &t);

  void take(T &t);

  void take(std::list<T> &);

  void stop();
  ~SyncQueue() {}

 private:
  std::list<T> queue_;
  std::mutex mutex_;
  std::condition_variable_any cv_empty_;
  bool run_;
};

class ThreadPool {
 public:
  typedef std::function<void ()> Task;
  ThreadPool(int thread_num): thread_num_(thread_num), run_(true) {}

  void start();

  void thread_run();

  void add(Task &task);

  void stop();

  virtual ~ThreadPool() {}

 private:
  SyncQueue<Task> queue_;
  int thread_num_;
  std::vector<std::thread> threads_;
  bool run_;
};

} //namespace tool
