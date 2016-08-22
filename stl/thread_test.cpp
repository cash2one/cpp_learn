#include <unistd.h>
#include <thread>
#include <iostream>
#include <vector>
#include <memory>
int kNum = 0;
void threa_func() {
    while (true) {
        int i = 0;
        sleep(3);
        std::cout << kNum++ << std::endl;
    }
}

int main(int argc, char *argv[])
{
    std::vector<std::unique_ptr<std::thread> > threads(10);
    for (int num = 0; num < 10; num++) {
        threads.push_back(new std::thread(threa_func));
    }

    for (int num = 0; num < 10; num++) {
        threads[num]->join();
    }

    return 0;
}
