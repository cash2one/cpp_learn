/*==================================
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：testcin.cpp
*   创 建 者：moon
*   创建日期：2015年04月18日
*   描    述：
*
======================================================*/
#include<iostream>

using namespace std;

int main(){
	int i=10;
	bool ye = *cin?true:false;
	while(ye && i--){
		cout<<"sdfsd"<<endl;
	ye = cin?true:false;
	}
	return 1;
}
