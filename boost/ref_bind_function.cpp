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
 * @brief ʹ��bind function ref
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
     *func�󶨶����Ա����ʱҪ��bindһ��
     */
    //function<void()> f = &Apple::printA;
    //

    /*
     *����copy�ܶ��
     */
    /*
     *function<void()> f = bind(&Apple::printA, apple);
     *f();
     */

    /*
     *û�в�������Ĺ��죬ţ��
     */
    function<void()> ff = bind(&Apple::printA, ref(apple));
    ff();

    /*
     *˽�к������ܰ�
     */
    function<void()> ffff = bind(&Apple::privateA, ref(apple));
    ffff();

    /*
     *û�в�������Ĺ��죬ţ��
     */
    function<void(Apple &)> fff = bind(&Apple::printA, _1);
    fff(apple);
    return 1;
}


