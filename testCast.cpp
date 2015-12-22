/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file testCast.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/10/22 19:31:40
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <iostream>
#include "apple.h"
using namespace std;

class tt{

};
int main() {
    int i = 1;
    float f= 1.1;
    Apple *apple = new Apple();
    //必须支持多台 dynamic
    //cout<<dynamic_cast<tt *>(apple)<<endl;
    cout<<static_cast<int>(f)<<endl;
}
