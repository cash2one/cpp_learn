/***************************************************************************
*
* Copyright (c) 2013 Baidu.com, Inc. All Rights Reserved
* $Id$
*
***************************************************************************/

/**
 * @file testIOiterator.cpp
 * @author  zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015-07-30
 * @brief 学习istream_iterator ostream_iteator copy 等用法
 */

#include <iterator>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "MyString.h"

using namespace std;

int main(){
    ifstream input("./apple.h");

    /*
     * \n 为ot 输出一个string后接着输换行
     */
    ostream_iterator<string> ot(cout,"\n");
    istream_iterator<string> it(input);
    //end 空迭代器
    istream_iterator<string> end;
    copy(it,end,ot);
}
