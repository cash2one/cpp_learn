#include <memory>
// #include <algorithm>
#include <algo.h>

#include "apple.h"

int main(int argc, char *argv[])
{
    std::shared_ptr<Apple> p_apple1(new Apple);
    std::shared_ptr<Apple> p_apple2(p_apple1);

    p_apple1->printA();
    p_apple2->printA();

    int a[] = {2,3,4,2,9,6,7};
    sort(a, a + 6);
                               
    
    return 0;
}
