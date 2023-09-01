#include<iostream>
using namespace std;
float x=455;
//Now we willl use refrence variable its mean that one variable will use value of other variable
float & y=x;
//Now y is a variable that is usisng value of x now thses are same
int main(){
    cout<<x<<endl<<endl;
    cout<<y;
    return 0;
}