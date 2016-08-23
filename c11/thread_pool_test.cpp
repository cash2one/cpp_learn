#include "thread_pool.h"
#include <iostream>
#include <chrono>

int main() {
  tool::ThreadPool pool(5);
  pool.start();
  tool::ThreadPool::Task func = []() {
    std::cout << std::this_thread::get_id() << std::endl;
  };

  for (int i = 0; i < 100; i++) {
    pool.add(func);
  }
  std::this_thread::sleep_for(std::chrono::seconds(5));

  pool.stop();
  return 0;
}
