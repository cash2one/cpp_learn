#include <memory>
#include "../apple.h"

int main() {
    std::auto_ptr<Apple> p1(new Apple());
    std::auto_ptr<Apple> p2(p1);
    // delete 0 NULL 居然没问题    
    delete static_cast<int *>(0);
    int* p = NULL;
    delete p;   
    return 0;
}










