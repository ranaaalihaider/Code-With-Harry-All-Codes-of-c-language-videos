#include<iostream>
using namespace std;
int t2=2, t3=3, t4=4, t5=5 ;
int main(){
    cout<<"Tables using For Loop";
    cout<<"Table of 2\n";
    for ( int s=1 ; s <=10 ; s++)
    {
        cout<<t2*s<<endl;
        /* code */
    }
    cout<<"Table of 3\n";
    for ( int p=1 ; p <=10 ; p++)
    {
        cout<<t3*p<<endl;
        /* code */
    }
    //Now we will try to Print Table by using WHile loop
    cout<<"Table while using while loop";
    cout<<"Table of 4\n";
    int q=1;
    while (q<=10)

    {cout<<t4*q<<endl;
    q++;
        /* code */
    }
cout<<"Table of 5 using Do while loop\n";
int r=1;
do
{cout<<t5*r<<endl;
r++;
    
} while (r<=10);

    
    return 0;

    
}