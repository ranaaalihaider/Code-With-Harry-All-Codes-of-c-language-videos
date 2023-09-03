#include <iostream>
using namespace std;

int main(){
    int a = 45;
    cout<<"The Value of a was " <<a;
    
    int b = 55;
    cout<<" The Value of a is " <<b;
//constant in c++ can not be changed 
//so now we will write int as a constant and its value will be not changed even if int with same name is defined next to it
const int c=870;
cout<<"\n This is value of int as a constant \n"<<c;
    return 0;
//Now we will try to change value of defined constant below and that should not work because constant is not changed 
const int d=986;
//int d=456;
//so i commented the upper line because with this line was changing the constant value hence code was not wroking properly
cout<<"\n Thus output will try to show value of constant that we are trying to change from const d 986 to int d 456 let see \n "<<d;

}