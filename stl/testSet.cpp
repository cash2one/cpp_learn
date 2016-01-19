/***************************************************************************
*
* Copyright (c) 2013 Baidu.com, Inc. All Rights Reserved
* $Id$
*
***************************************************************************/

/**
 * @file testSet.cpp
 * @author  zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015-07-30
 * @brief 测试set用法  以及# ##的使用
 */

#include <iostream>
#include <iterator>
#include <set>

using namespace std;

#define pval(A) do{ \
                    std::cout<< #A<<":" <<A<<std::endl;} \
                while(0)

int main()
{
    int a[10] = {9,2,3,45,32,1,4,34,22,10};
    set<int> ss(a,a+9);
    ostream_iterator<int> ot(cout,",");

    /*
     * *Copyright(c) 2005-2007 Shanghai LUCENT Telecommunication Corp.
     * *
     * *Authored by LUCENT ZJUJOE on: Thu Jul 30 18:27:12 CST 2015
     * *
     * *Funcion goal:
     * *
     * *Author:
     * *
     * *Input arguments:
     * *
     * *OutPut arguments:
     */*
         *Copyright(c) 2005-2007 Shanghai LUCENT Telecommunication Corp.
         *
         * *Authored by LUCENT ZJUJOE on: Thu Jul 30 18:27:23 CST 2015
         * *
         * *Funcion goal:
         * *
         * *Author:
         * *
         * *Input arguments:
         * *
         * *OutPut arguments:
         * */k
     * */
    int s##ss;

    copy(ss.begin(),ss.end(),ot);
    ss.insert(9);
    ss.insert(9);
    pval(ss.count(9));
    pval(ss.count(9));
    pval(ss.size());

    return 1;
}


