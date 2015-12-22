/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file testFstream.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/09/01 17:13:09
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */

#include<iostream>
#include<fstream>
#include<string>

int main(){
    /**
     * app模式，直接到文件尾了，good直接false
     */
    /*
     *std::fstream is("./apple", std::ios::in|std::ios::app);
     *while (is.good()){
     *    std::string s;
     *    is>>s;
     *    std::cout<<s<<std::endl;;
     *    is<<"helooo"<<std::endl;
     *}
     */


    /*
     *in模式下，写hellooo没成功，而且导致直接到文件尾
     */

    /*
     *std::fstream is("./apple", std::ios::in);
     *std::string s;
     *while (is>>s){
     *    std::cout<<s<<std::endl;;
     *    is<<"helooo"<<std::endl;
     *}
     */

    /*
     *std::fstream is("./apple", std::ios::in);
     *std::string s;
     *while (is>>s){
     *    std::cout<<s<<std::endl;;
     *}
     */

    /*
     *getline 读入一行
     */
    /*
     *std::fstream is("./apple", std::ios::in);
     *std::string s;
     *char buf[100];
     *while (is.getline(buf, 100)){
     *    std::cout<<buf<<std::endl;;
     *}
     */
    std::fstream is("./apple", std::ios::in|std::ios::out);
    std::string s;
    char buf[100];
    while (is.getline(buf, 100)){
        //std::cout<<is.tellg()<<std::endl;
        //std::cout<<is.tellp()<<std::endl;
        std::cout<<buf<<std::endl;
        //is<<"helooo"<<std::endl;
        is.seekp(std::ios::beg);
        //std::cout<<is.tellg()<<std::endl;
        //std::cout<<is.tellp()<<std::endl;
    }


    return 1;
}
