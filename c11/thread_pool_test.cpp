#include "thread_pool.h"
#include <iostream>
#include <chrono>

int main() {
  tool::ThreadPool pool(5);
  pool.start();
  auto func = []() {
    std::cout << std::this_thread::get_id() << std::endl;
  };

  tool::ThreadPool::Task task = func;
  for (int i = 0; i < 100; i++) {
    pool.add(task);
  }
  std::this_thread::sleep_for (std::chrono::seconds(5));
  pool.stop();
}
