#include<iostream>
using namespace std;
int main(){
//C++ Controll stucture are following
//1 sequence Structure
//2 Selection Structure
//3 Loop Structure
//Sequence Structure will do things in sequence
//Selection structuree asks qurstion form programme like true falls etc
//Loop Structure do things in loop checks the condition  
//if condition is true loop starts 
//when responce will false loop will take exit from programme
//it can be modeled in programme by using if else statement
//it can be modeled in programme by using if else leader
//it can be modeled in programme by using switch 
int age;
cout<<"This is lecture 9"<<endl;
cout<<"Tell me your age"<<endl;
cin>>age;
if ((age<18) && (age>0))
{ cout<<"You can not come to my party "<<endl;
    /* code */
}
else if (age==18)
{ cout<<"you are a kid and you will get a kid pass to come to party"<<endl;

    /* code */
}
else if (age<1)
{ cout<<"You are not yet borned"<<endl;
    /* code */
}

else{
    cout<<"You can come to party"<<endl;
}

    return 0;
}