/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file shared.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/09/06 14:23:36
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
//#include<boost/shared_ptr.hpp>
#include<boost/smart_ptr.hpp>
#include<iostream>
using namespace std;

class T{
public:
    T(int i):_i(i){cout<<"constructer\n";}
    ~T(){cout<<"disconstructer\n";}
    int getI(){
        return _i;
    }

private:
    int _i;
};

void test(boost::shared_ptr<T> ptr){
    cout<<ptr->getI()<<endl;;
}
int main(){
    boost::shared_ptr<T> s_ptr = boost::shared_ptr<T>(new T(1));
    for (int j=0; j<10; j++){
         test(s_ptr);
    }

    /*
     *auto_prt已经是标准库了
     */
    std::auto_ptr<string> s = auto_ptr<string>(new string("sfdsdfsd"));
    cout<<*s<<endl;

    return 0;
}
