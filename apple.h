/*==================================
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：apple.cpp
*   创 建 者：moon
*   创建日期：2015年04月12日
*   描    述：
*
======================================================*/
#include<iostream>
#include<string>
using namespace std;
class Apple {
	public :
		int a;
		Apple(){
			std::cout<<"construct Apple"<<std::endl;
		}
		~Apple(){
			std::cout<<"disconstruct Apple \n";
		}
		void get(int a,string){
			std::cout<<"string\n";
		}

		void get(int  a,int){
			std::cout<<"int \n";
		}
};
