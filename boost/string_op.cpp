/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file string_op.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/09/09 14:03:34
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <iostream>
//#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;

int main() {
    string s("sdfsdfsd\t23423\tssss");
    vector<string> res;
    split(res, s, '\t');

    for(vector<string>::iterator it = res.begin(); it != res.end(); it++){
        cout<<*it<<endl;
    }

    return 0;
}


