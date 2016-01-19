/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file lexical.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/09/06 17:37:06
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include<iostream>
#include <boost/lexical_cast.hpp>

using namespace std;

int main(){
    string s = boost::lexical_cast<string>(2.32342334);
    cout<<s<<endl;
    float f = boost::lexical_cast<float>("3.234234");
    cout<<f<<endl;

    try{
        float f = boost::lexical_cast<float>("3.2s34234");
        cout<<f<<endl;
    }
    catch(boost::bad_lexical_cast &e){
        cout<<e.what()<<endl;
    }
    return 0;
}
