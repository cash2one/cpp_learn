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
#define print(val) std::cout<<#val<<": "<<val<<std::endl;
class Apple {
    public :
        Apple():b(6){std::cout<<"default construct\n"; }
        Apple(int a, int b):a(a),b(b){
            std::cout<<"construct Apple"<<std::endl;
        }
        Apple(const Apple & apple):b(6){
            a=apple.a;
            std::cout<<"copy construct Apple"<<std::endl;
        }
        Apple & operator =(Apple & apple){
            cout<<"operator ="<<endl;
            this->a=apple.a;
            return *this;
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

        void printA(){
            cout<<a<<endl;
        }

        void printB(){
            cout<<b<<endl;
        }

        void setA(int a) {
            this->a = a;
        }

        void testConst() const {
            cout<<"test const: " <<a<<endl;
        }

    private:
        int a;
        const int b;
        void privateA(){
            cout<<a<<endl;
        }

};
