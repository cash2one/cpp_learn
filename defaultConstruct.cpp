/**************************************
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：defaultConstruct.cpp
*   创 建 者：moon
*   创建日期：2015年06月30日
*   描    述：
*
****************************************/
#include<iostream>

using namespace std;

class Base {
	public:
		int i; //
/*
 *        no default CS result:
 *        编译器合成的默认构造函数 不初始化i，随机值
 *        Press ENTER or type command to continue
 *            -129005285632767
 *            0.00user 0.00system 0:00.02elapsed 0%CPU (0avgtext+0avgdata 4464maxresident)k
 *            344inputs+0outputs (2major+321minor)pagefaults 0swaps
 *
 *            Press ENTER or type command to continue
 *
 *            Press ENTER or type command to continue
 *            880136832767
 *            0.00user 0.00system 0:00.19elapsed 0%CPU (0avgtext+0avgdata 4464maxresident)k
 *            344inputs+0outputs (2major+321minor)pagefaults 0swaps
 */
		Base(){
			i=1;
		}
};
class Derived {
	public:
		int j;
		Base base;
		/*
		 *编译器合成的默认构造函数调用了Base的 defaut cs
		 *    Press ENTER or type command to continue
		 *    8754334321
		 *    1
		 *    0.00user 0.00system 0:00.00elapsed 0%CPU (0avgtext+0avgdata 4448maxresident)k
		 *    0inputs+0outputs (0major+322minor)pagefaults 0swap
		 */
};

int main(){
	Base b;
	Derived derived;

	cout<<derived.j<<derived.base.i<<endl;
	cout<<derived.base.i<<endl;
}
