/**************************************
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：virtualDisconstruct.cpp
*   创 建 者：moon
*   创建日期：2015年05月16日
*   描    述： 测试存虚析构函数   目的是使 Fruit不能实例化
*
****************************************/

#include<iostream>
using namespace std;


class Fruit{
	public:
		virtual ~Fruit() =0;
};

Fruit:: ~Fruit(){
	cout<<"virturl Frult"<<endl;
}



class Apple:public Fruit  {
	public:
	~Apple(){
		std::cout<<"Apple disconsturct"<<endl;
	}
};

class Oriange:public Fruit  {
	public:
	~Oriange(){
		std::cout<<"Orange disconsturct"<<endl;
	}
};

int main(){
	Fruit * fruit = new Fruit();
	Fruit *  apple = new Apple();
	Fruit *  orange = new Oriange();
	delete apple;
	delete orange;

	std::cout<<"exit"<<endl;
	return 0;
}
