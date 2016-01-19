/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

/**
 * @file testException.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/09/07 19:37:38
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <iostream>
#include "Exception.h"

using namespace std;

void test(){
    try{
        int i=1;
        throw Exception("just for test");
    }catch (Exception &e){
        cout<<e.what()<<endl;
        cout<<e.stackTrace()<<endl;
    }
}
int main(){
    test();
    return 1;
}

