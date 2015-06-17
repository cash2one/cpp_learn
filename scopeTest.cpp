/**************************************
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：scopeTest.cpp
*   创 建 者：moon
*   创建日期：2015年06月17日
*   描    述：{obj} 括号里的对象会自动释放吗
*   结果确实自动释放了
*
****************************************/


#include<iostream>

using namespace std;

class Apple{
	public:
		Apple(){
			cout<<"construct "<<endl;
		}
		~Apple(){
			cout<<"discontruct\n";
		}
};

int main(){
	Apple a;
	{
		Apple b;
	}

	while(1);

	return 1;
}
