#include<iostream>
using namespace std;

int main () {
    //Now we will see beaking of a loop in mid of any function even conditions are true
    for (int i = 0; i < 41; i++)
    {
        cout<<i<<endl;
    }
 //Now we will break the same loop on 20 with smae code
 cout<<"Lower is the same code with feature of brealing loop at 20";
 for (int i = 0; i < 41; i++)
 {
    cout<<i<<endl;
    if (i==20)
    {
        break;
    }
 }
    //Now we will study function of contineous loop
     cout<<"Following is example of contineous function\n";
     for (int d = 0; d <=40; d++)
     {
        if (d==20)
        {
            continue;
        }
        
        cout<<d<<endl;
     }
     
 
    
    
    return 0;
}