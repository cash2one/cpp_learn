/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

/**
 * @file testConst.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/10/10 17:30:11
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <iostream>
#include "apple.h"
using namespace std;

int main(){
    Apple a(1,2);
    const Apple b(1, 2);
    a.testConst();
    a.printB();
    /*
     *const对象不能调用非const成员函数
     */
    //b.printA();
    b.testConst();
}
