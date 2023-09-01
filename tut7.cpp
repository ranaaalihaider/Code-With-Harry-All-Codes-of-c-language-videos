#include <iostream>
using namespace std;

int c=45;
int main(){
int a, b, c;
cout<<"Enter the value of a\n";
cin>>a;
cout<<"\nEnter the value of b\n";
cin>>b;
c=(a+b);
cout<<"The sum is c\n"<<c;

//Now we will learn use of scope reolution operator that will use vaues of global variable and we use :: for this
//now following value will be obtained by the global variable outside the int main function
cout<<"\n This is also value of c but will be obtained by global vairable by use of :: \n"<<::c;

float d=33.4;
long double e=33.4;
cout<<"\n The value of d in float is \n"<<d;
cout<<"\n The value of e in long double int is \n"<<e;

cout<<"\nnow point is 34.4 is a double number in category\n";
cout<<"\nbut to pass it as a float category we can write it as 34.4f like below\n";

float f=33.4f;
long double g=33.4;
cout<<"\n The value of f in float is now this value is by writing 34.4f \n"<<f;
cout<<"\n The value of g in long double int is \n"<<g;
    return 0;
}