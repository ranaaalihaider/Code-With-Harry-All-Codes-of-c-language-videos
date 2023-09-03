#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    //These are manipulators in c++
    //now we will use function of iomapin 
    int a=4, b=46, c=9984;

    cout<<"Value of a without setw "<<a<<endl;
     cout<<"Value of b without setw "<<b<<endl;
      cout<<"Value of c without setw "<<c<<endl;
   //Now we will use setw that is comming from iomapin
    cout<<"Value of a with setw"<<setw(4)<<a<<endl;
     cout<<"Value of b with setw"<<setw(4)<<b<<endl;
      cout<<"Value of c with setw "<<setw(4)<<c<<endl; 
        return 0;
}
