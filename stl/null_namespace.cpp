#include <iostream>

int val = 100;

int main() {
    int val = 1;
    std::cout << val << std::endl;
    std::cout << ::val << std::endl;  // 引用全局空间
    return 0;
}
// result 
// 1
// 100
