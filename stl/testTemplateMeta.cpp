/***************************************************************************
*
* Copyright (c) 2013 Baidu.com, Inc. All Rights Reserved
* $Id$
*
***************************************************************************/

/**
 * @file testTemplateMeta.cpp
 * @author  zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015-07-31
 * @brief
 */
#include <iostream>

// 计算 N 的阶乘 N!
template<int N>
class aTMP{
public:
    //换成int不行，非const的成员变量不能直接初始化， enum是类型故可以计算
    enum { ret = N * aTMP<N-1>::ret };
};
template<>
class aTMP<0>{
public:
    enum { ret = 1 };
};

int main(){
    std::cout << aTMP<10>::ret << '\n';
    std::cin.get(); return 0;
}
