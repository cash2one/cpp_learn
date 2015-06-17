/*==================================
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：stringtest.cpp
*   创 建 者：moon
*   创建日期：2015年04月10日
*   描    述：
*
================================================================*/
#include <iostream>
#include <string>

using namespace std;
class A{
};
class B{
};

#define print(var)  do{ cout<<#var<<":"<<var<<endl;}\
	while(0)

int main(){
#ifdef __cplusplus
	cout<<"CPP";
#else
	cout<<"C";
#endif
	string s="adfadsfkjalsdfkjsakd";
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
	print(s);
	string ss="sdfsd";
	print(ss);
	cout<<s<<endl;
	s.swap(ss);
	cout<<s<<endl;

	const char * str = ss.c_str();
	cout<<"c_str:  "<<str<<endl;
	cout<<"c_str addr:  "<<(long)str<<endl;
	const char * data = ss.data();
	cout<<"data:  "<<data<<endl;
	cout<<"data addr:  "<<(long)data<<endl;


	cout<<"capacity:  "<<ss.capacity()<<endl;
	cout<<"max_size:  "<<ss.max_size()<<endl;
	cout<<"size:  "<<ss.size()<<endl;
	cout<<"length:  "<<ss.length()<<endl;

	ss="";
	cout<<"empty: "<<ss.empty()<<endl;

	ss.resize(100,'c');
	cout<<ss<<endl;
	cout<<ss.find("ss",0)<<endl;
	return 0;

}
