/***************************************************************************
 *
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file test_class_var_init.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2016/03/14 16:09:47
 * @version $Revision$
 * @brief
 *
 **/
#include <iostream>

class test{
public:
    test() {}
private:
    int a;

    /*    //c++11 allow
     *const int b =2 ;
     *const float fb =2 ;
     *const double db =2 ;
     */
    static const int c = 1;
    static const char cc = 1;
    static const long long ccl = 1;
    void func();
};

int main() {
     //test t;
/*for test level db lrucache
 *     int **p;
 *     int **p0 = &p[0];
 *     std::cout<<*p0;
 *
 */
     return 0;
}
/* vim: set ts=4 sw=4 sts=4 tw=100 */
