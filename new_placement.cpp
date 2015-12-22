/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file new_placement.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/11/18 14:19:10
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <stdlib.h>
#include <new>
#include <iostream>
#include "apple.h"

int main() {
    char * pApple = (char *)malloc(sizeof(Apple));
    Apple a(1, 2);
    new (pApple) Apple(3, 4);         /**< construct       */
    reinterpret_cast<Apple *>(pApple)->printA();
    reinterpret_cast<Apple *>(pApple)->~Apple();

    new (pApple) Apple(a);        /**< copy construct       */
    reinterpret_cast<Apple *>(pApple)->printA();
    reinterpret_cast<Apple *>(pApple)->~Apple();          /**<  need manual call disconstruct   */
}
