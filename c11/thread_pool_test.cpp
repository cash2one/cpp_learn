#include "thread_pool.h"
#include <iostream>
#include <chrono>

int main() {
    tool::ThreadPool pool(10);
    auto func = []() {
        std::cout << std::this_thread::get_id() << std::endl;
    };

    for (int i = 0; i < 1000; i++) {
        pool.add(func);
    }

    std::this_thread::sleep_for (std::chrono::seconds(100));
}
