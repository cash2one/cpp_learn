/*==================================
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：overload.cpp
*   创 建 者：moon
*   创建日期：2015年04月22日
*   描    述：
*
======================================================*/
#include<iostream>
using namespace std;

class add{
	public:
		add():a(2){}
		/*friend add & operator + (add & a,add & b){*/
			//a.a+=b.a;
			//cout<<"double\n";
			//return a;
		/*}*/
		add  operator + (add & b){
			this->a+=b.a;
			cout<<"single\n";
			return *this;
		}
		int a;
};


int main(){
	add a,b;
	add c=a+b;
	//cout<sizeof(c)<<endl;
	return 1;
}
