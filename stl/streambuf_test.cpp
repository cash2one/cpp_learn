/***************************************************************************
 *
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file streambuf_test.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2016/02/04 15:40:46
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <iterator>
using namespace std;

int main() {
    ifstream f("/home/users/zhangfangjie/test.tar.gz");
    //string str(istreambuf_iterator<char>(f), istreambuf_iterator<char>());   //这个效率据说会高些
    string str(istream_iterator<char>(f), istream_iterator<char>());

    //cout<<str.substr(100000, 1000)<<endl;;

    string s="32 32 3333 11";
    string s1="32 32 33 11";
    stringstream ss;
    ss << s;
    istream_iterator<int> it(ss);
    std::vector<int> vi(it, istream_iterator<int>());

    ss.clear();
    ss << s1;
    istream_iterator<int> it1(ss);
    std::vector<int> vi1(it1, istream_iterator<int>());

    std::cout<<vi[2];
    std::cout<<vi1[2];


    return 0;
}
