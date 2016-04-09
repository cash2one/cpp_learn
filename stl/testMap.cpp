/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file testMap.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/12/30 14:32:01
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <iostream>
#include <map>

int main() {
    std::map<int, int> imap;
    imap.insert(std::make_pair(1, 1));
    imap.insert(std::make_pair(1, 2));
    imap.insert(std::make_pair(1, 3));

    std::cout<<imap.size()<<"-"<<imap[1];                 /**<    1-1    */
    return 0;
}
