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
		Apple(){std::cout<<"default construct\n";}
		Apple(int a){
			this->a=a;
			std::cout<<"construct Apple"<<std::endl;
		}
		Apple(const Apple & apple){
			a=apple.a;
			std::cout<<"copy construct Apple"<<std::endl;
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

	Apple & operator =(Apple & apple){
		cout<<"operator ="<<endl;
		this->a=apple.a;
		return *this;
	}
};
