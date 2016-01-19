/***************************************************************************A
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file main.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/10/30 17:20:50
 * @version $Revision$
 * @brief
 *
 **/
#include <iostream>
extern "C" {
#include "c_func.h"
}

int main() {
    std::cout<<test(1, 2)<<std::endl;
    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */
