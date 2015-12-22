/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file vecotr_pop.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/11/19 11:37:33
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */

#include <iostream>
#include <vector>
using namespace std;

int main(){
     typedef vector<int> VI;
     VI vi(10,10);
     cout<<vi.size()<<endl;
     int i = 0;
     while (i++ < 15) {
         vi.pop_back();
     }
     cout<<vi.front()<<endl;
     cout<<vi.back()<<endl;               /**<  pop_back 不会做边界检查，直接_M_finins--  */
     /**<    _M_start = 0x603010,
           _M_finish = 0x602ffc,
           _M_end_of_storage = 0x603038}}*/
}
