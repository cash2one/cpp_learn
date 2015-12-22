/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

/**
 * @file testFloat.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/08/24 13:14:40
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */

#include<iostream>
#include<sstream>
#include<stdio.h>
using namespace std;

#define BASE 100000000

float stringToNum(const string& str){
    istringstream iss(str);
    float num;
    try{
        iss >> num;
    }
    catch(exception e){
        printf("convert to float error");
        return 0;
    }
    return num;

}
int main(){
    string s = "1200000000.000000";
    int i = 12;
    float f = 12 * BASE;
    cout<<f<<endl;
    char buf[100];
    sprintf(buf, "%f", f);
    cout<<buf<<endl;
    float ff = stringToNum(s);
    sprintf(buf, "%f", f);
    cout<<buf<<endl;
}
