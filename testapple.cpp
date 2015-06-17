/*==================================
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：testapple.cpp
*   创 建 者：moon
*   创建日期：2015年04月12日
*   描    述：
*
======================================================*/
#include"apple.h"
#include <string>

void test(){
	Apple *apple = new Apple();
	return;
}

int main(){
	string s;

	Apple a;
	a.get(1,int());
	a.get(1,string());
	test();
}
