/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file const.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/09/10 14:28:00
 * @version $Revision$
 * @brief 学习 #　＃＃　ｓｔｒｉｎｇ相关操作
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */

#include <iostream>
using namespace std;
#define print(val) cout<<#val<<" value: "<<val<<endl;
#define concat(a,b) a##b

void test(const string &p){
    cout<<p<<endl;
}

int main() {
    int ab = 1;
    string p("sfsdf");

    print(concat(a,b));

    print(p);
    print(p.size());
    print(p.length());
    print(p.data());
    print(p.c_str());

    p.resize(10, '3');
    print(p);

    string::iterator it = p.begin();
    print(*it);
    p.erase(it);
    print(p);
    print(p.max_size());
    print(p.capacity());

    test(p);

}
