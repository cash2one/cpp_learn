#include <iostream>

int val = 100;

int main() {
    int val = 1;
    std::cout << val << std::endl;
    std::cout << ::val << std::endl;  // ����ȫ�ֿռ�
    return 0;
}
// result 
// 1
// 100
