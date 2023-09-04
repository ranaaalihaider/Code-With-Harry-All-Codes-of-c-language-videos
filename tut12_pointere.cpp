#include<iostream>
using namespace std;

int main () {
    /*Now we will study about pointers
    Pointers are data types which holds address of other data types*/
    int a=3;
    cout<<"The value of a is "<<a<<endl;

    //LoWEr LINE MEANS THAT int* is a variable which holds the address of int a
    //itn* is a pointer variable which point on a variable 
    //&a is a address of variable which means address of a
    // * is a Derefrence operator 
    int * b = &a;
      //Now we will see address of "a" in memory
      cout<<b<<endl;
      //so its output is showing address of saved variable a in memory
      //so address of a is stored in b so output of b is showing address of a
      //Now we will show value stored at b its mean now we will show that
      //what is the value of address that is stored on pointer b
      //Now we will use Dereferencec Operators
    cout<<"The value of b storing address of a is "<<*b<<endl;
    /*Now sussmmy is if these is * before any pointer it will show its value
    if we add & before any int etc it will give its address*/
    cout<<"Testing Pointer Function"<<endl;
    int p=12;
    int* f=&p;
    cout<<"Now we will show value of p\n"<<p<<endl;
    cout<<"Now we will show address of  p stored in f pointer\n"<<f<<endl;
    cout<<"Now we will show value of p stored in address on f\n"<<*f<<endl;
    /*Now we will study pointere to pointer 
    Now we will store address of a pointer in a pointer
    for this we can do that we can make a pointer to pointer
    for pointer to pointer we will do that we will write int** and rest of method will same*/
    cout<<"Now we will show address of a pointer by using pointer to pointerf"<<endl;
    int** g= &f;
    cout<<"Now g is a pointer to pointer that will show address of pointer f \n"<<g<<endl;
    cout<<"The value of address at g is value of f and value at f is value of p now we will show output "<<endl;
    cout<<"The output will be value stored on 1st and will be obtained by using double **"<<endl;
    cout<<**g;

    //now point is * will make pointer and &(with intiger name) show address

    
    return 0;
}