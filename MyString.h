/*==================================
 *   Copyright (C) 2015 All rights reserved.
 *
 *   文件名称：MyString.h
 *   创 建 者：moon
 *   创建日期：2015年04月25日
 *   描    述：
 *
 ======================================================*/
#pragma once
#include<cstring>
#include<iostream>
using namespace std;

class MyString{
	public:
		MyString():data(new char[0]){
			*data='\0';
		}
		MyString (const MyString &s){
			data = new char[s.size()+1];
			strcpy(data,s.c_str());
		}

		MyString(const char *str){
			if (NULL == str){
				MyString();
			}
			else{
				data = new char[strlen(str)+1];
				strcpy(data,str);
			}
		}

		~MyString(){
			delete []data;
		}

		MyString& operator =(const MyString & s){
			delete []data;
			data = new char[s.size()+1];
			strcpy(data,s.c_str());
			return *this;
		}

		friend ostream & operator<< (ostream &os,const MyString &s){
			os<<s.c_str()<<endl;
			return os;
		}


		const char * c_str() const{
			return data;
		}
		int size() const{
			return  strlen(data)+1;
		}
		void swap(MyString &s){
			std::swap(data,s.data);
		}

	private:
		char *data;
};
