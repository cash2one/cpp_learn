/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file ref_bind_function.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/09/06 19:09:22
 * @version $Revision$
 * @brief 使用bind function ref
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include<boost/ref.hpp>
#include<boost/bind.hpp>
#include<boost/function.hpp>
#include<iostream>
#include "../apple.h"

using namespace std;
using namespace boost;

void test(Apple a){
    a.printA();
}

int main(){
    Apple apple(1);

    /*
     *func绑定对象成员函数时要和bind一起
     */
    //function<void()> f = &Apple::printA;
    //

    /*
     *构造copy很多次
     */
    /*
     *function<void()> f = bind(&Apple::printA, apple);
     *f();
     */

    /*
     *没有产生额外的构造，牛逼
     */
    function<void()> ff = bind(&Apple::printA, ref(apple));
    ff();

    /*
     *私有函数不能绑定
     */
    function<void()> ffff = bind(&Apple::privateA, ref(apple));
    ffff();

    /*
     *没有产生额外的构造，牛逼
     */
    function<void(Apple &)> fff = bind(&Apple::printA, _1);
    fff(apple);
    return 1;
}


