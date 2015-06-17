/*==================================
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：reference.cpp
*   创 建 者：moon
*   创建日期：2015年04月16日
*   描    述：
*
======================================================*/
#include<iostream>
using namespace std;

void test(int &b){
	b++;
	cout<<b<<endl;
	return;
}
int main(){
	int a=1;
	int &b=a;
	test(b);
	cout<<b<<endl;
	return b;
}
