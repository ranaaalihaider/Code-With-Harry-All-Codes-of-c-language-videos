#include <iostream>
using namespace std;
int main(){
int age;
cout<<"Tell me your age"<<endl;
cin>>age;
    switch (age)
    {
    case 18/* constant-expression */:
        /* code */cout<<"you are 18"<<endl;
        break;
    case 2/* constant-expression */:
        /* code */cout<<"you are 2"<<endl;
        break;
    case 22/* constant-expression */:
        /* code */cout<<"you are 22"<<endl;
        break;
    
    default:
    cout<<"No Special Cases"<<endl;

        break;
    }
    cout<<"Done with Switch case"<<endl;
    return 0;
}