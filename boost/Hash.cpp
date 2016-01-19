/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file Hash.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/09/09 19:33:21
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <iostream>
#include <string>

#include <ext/hash_map>
using namespace __gnu_cxx;

using namespace std;

int main() {
    /*
     *hash_map<string, int> hmap;
     *hmap["sdfsd"] = 1;
     */

    hash_map<int, string> hmap;
    hmap[1] = "sdfsd";
    cout<<hmap.size()<<endl;
}
