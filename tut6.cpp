#include <iostream>
using namespace std;
//There are two types of header files
//1.system header files comes with compiler
//2.user-defined header files written by coder
//2.1 User Defined Header file will be represemted in "" inverted commas like below
//#include "this.h"

int main(){
    int a=5, b=15;
    cout<<"This is Hello World Programme"<<endl;
    cout<<"Operators in C++ Language Today Topic"<<endl;
    cout<<"Following are types of operators in c++"<<endl;
    cout<<"Aithmaic Operators"<<endl;
    cout<<"The Value of A+B int is "<<a+b ;
    cout<<"\nThe Value of A-B int is "<<a-b;
    cout<<"\nThe Value of A*B int is "<<a*b;
    cout<<"\nThe Value of A/B int is "<<a/b;
    //These signs of + - *  /  are aritmatic operators in this programme

    //Now we will se assignment operators
    //int a=4, b=6;
    //char d='c'

    //Comparison Operators
    // will compare values and will tell us that
    //are values greater ,smaller or equalll or unequall
    cout<<"\nThe values by Comparison operators \n";
    cout<<"\nThe value of a==b is \n"<<(a==b);
    cout<<"\nThe value of a!=b is \n"<<(a!=b);
    cout<<"\nThe value of a > b is \n"<<(a>b);
    cout<<"\nThe value of a < b is \n"<<(a<b);
    cout<<"\nThe value of a >= b is \n"<<(a>=b);
    cout<<"\nThe value of a <= b is \n"<<(a<=b);

//now we will talk about logical operators
cout<<"\nThe value of <<((a==b)&&(a<b)) logical AND operator is \n"<<((a==b)&&(a<b));
cout<<"\nThe value of <<((a==b)||(a<b)) logical OR operator is \n"<<((a==b)||(a<b));
cout<<"\nThe value of  NOT operator is !(a==b) \n"<<!(a==b);
    return 0;

}