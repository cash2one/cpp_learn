/**************************************
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：initListConstruct.cpp
*   创 建 者：moon
*   创建日期：2015年06月17日
*   描    述：测试构造函数 初始化列表优势
*
****************************************/
#include<iostream>
#include "apple.h"

class Fruit{
	private :
		Apple one;
		//Apple two;
	public:
		Fruit(Apple two):one(two){}
		/*
		 *Fruit(Apple two){
		 *    one=two;
		 *}
		 */
		~Fruit(){};
};


int main(){
	Apple one(1);
	Fruit fruit(one);

	return 1;
}
