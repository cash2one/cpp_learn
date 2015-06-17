/*==================================
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：function_obj.cpp
*   创 建 者：moon
*   创建日期：2015年04月22日
*   描    述：
*
======================================================*/
#include<iostream>

using namespace std;

template<typename T>
struct add {
	public:
		T& operator() ( const T& a,const T& b){
			/*
			 * 返回应用报错，非const引用 不能绑定临时对象
			 *unction_obj.cpp:18:12: error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’
			 */
		return a+b;
	}
};

int main(){
	add<int> plus;
	cout<<plus(1,5)<<endl;
	cout<<add<int>()(2,6)<<endl;

}
