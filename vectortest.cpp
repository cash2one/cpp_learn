/*==================================
*   Copyright (C) 2015 All rights reserved.
*
*   文件名称：vectortest.cpp
*   创 建 者：moon
*   创建日期：2015年04月11日
*   描    述：
*
======================================================*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<typename T>
void print_container(T &t){
	typename T::iterator it = t.begin();
	for (it;it != t.end();it++){
		cout<<*it<<",";
	}
	cout<<endl;
	return;
}

int main(){
	vector<int> vv;
	vv.push_back(11);
	vv.push_back(22);
	vv.push_back(1);
	vv.push_back(2);
	vv.push_back(1);

	//vv.pop_back();
	//vv.erase(vv.begin());

	std::replace(vv.begin(),vv.end(),1,45);
	print_container(vv);
	std::sort(vv.begin(),vv.end());
	print_container(vv);

	vector<int>::difference_type length = std::count(vv.begin(),vv.end(),1);

	vector<int>::iterator loca  = std::find(vv.begin(),vv.end(),22);

	cout<<*loca<<endl;

	cout<<"length :" << length<<endl;


	cout<<vv.size()<<endl;

	return 0;
}

