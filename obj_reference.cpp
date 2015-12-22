/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file obj_reference.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/11/17 14:11:13
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <vector>
#include "apple.h"

int main() {
    Apple a(1, 2);
    std::vector<Apple> va;
    va.push_back(a);

    Apple &ra = va.front();
    ra.setA(100);
    /*
     *如果下面不是引用，则要调用拷贝构造函数给rb赋值,cs
     */
    Apple rb = va.front();
    rb.printA();

    return 0;
}
