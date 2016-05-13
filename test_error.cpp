/***************************************************************************
 *
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file test_error.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2016/03/15 15:06:02
 * @version $Revision$
 * @brief
 *
 **/
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream("xxxx");
    std::cout<<strerror(errno);
    perror("xxx");
    std::string s;
    std::vector<int> vi;
    s.
    vi.pop_back();
    vi.at(45)
    /*
     *std::ifstream("xxxx");
     *std::cout<<strerror(errno);
     */
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */
