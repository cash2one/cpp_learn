/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file test.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/09/09 19:40:22
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */

#include <hash_map>
#include <string>
using namespace std;
int main(){
        hash_map<int, string> mymap;
        mymap[9527]="�Ʋ���������";
        mymap[1000000]="�����̵�����";
        mymap[10000]="����Ĺ��ʵ���";
        if(mymap.find(10000) != mymap.end()){
        }
return 0;
}
