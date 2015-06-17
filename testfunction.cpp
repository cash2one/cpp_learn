/*==================================
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：testfunction.cpp
*   创 建 者：moon
*   创建日期：2015年04月18日
*   描    述：
*
======================================================*/
#include<iostream>
#include<functional>


using namespace std;

int main(){
	less<int> less_obj;
	int i = less_obj(3,5);
	cout<<"i is "<<i<<endl;

	return 1;
}


