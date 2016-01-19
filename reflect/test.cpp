/***************************************************************************
 *
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file test.h
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2016/01/19 18:39:07
 * @version $Revision$
 * @brief
 *
 **/
#ifndef TEST_H
#define TEST_H
#include <iostream>
#include "fruit.h"

int main() {
    Object *po = Object::CreateObject("orange");
    delete po;
    Object *pb = Object::CreateObject("banala");
    delete pb;
}

#endif  // TEST_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
