/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file enum_test.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/12/03 14:09:34
 * @version $Revision$
 * @brief 模板元编程，enum
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <iostream>
template<int N>
struct tt{
    enum {
        val = tt<N-1>::val + tt<N-2>::val
    };
};
template <>
struct tt<1> {
    enum {
        val = 1
    };
};
template <>
struct tt<0> {
    enum {
        val = 0
    };
};


enum {        /**< 没有指定enum 名字，则可以直接使用   类似于define了   */
    RED=1,
    YELLOW
};

int main() {
    std::cout<<RED<<std::endl;        /**< 1       */
    std::cout<<YELLOW<<std::endl;         /**< 2       */
    std::cout<<tt<9>::val<<std::endl;         /**< 34*/
    std::cout<<tt<4>::val<<std::endl;         /**< 3*/
    return 0;
}
