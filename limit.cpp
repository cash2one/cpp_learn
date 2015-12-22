/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file limit.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/09/18 13:47:16
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <limits.h>
#include <iostream>
#define p(val) cout<<#val<<" value: "<<val<<endl

using namespace std;

int main() {
    p(numeric_limits<float>::max());
    p(numeric_limits<float>::min());
    p(numeric_limits<int>::min());
    p(numeric_limits<int>::max());
    p(numeric_limits<char>::min());
    p(numeric_limits<char>::max());
}
