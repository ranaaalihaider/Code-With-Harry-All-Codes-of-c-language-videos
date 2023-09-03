#include <iostream>
using namespace std;
int main(){
    //Now we will learn loops in c++
    /*There are three types of loops in c++
    1. For Loop
    2. While Loop
    3. do-while loop
    */
//Syntax For Loop
/*
for (initialization; condition; updation)
{ loop body (c++ cpde)

}
*/
  for ( int i = 0; i < 40; i++)
  {
    cout<<i<<endl;
    
  }
//Now i will try this loop for myself
/*
Syntax for loop is given blow in simple words 
1. for (initialization mean initialize ths code 1st time only ;
2. next step is condtition if condition is true it enters in loop and execute code in c++
3. After Execution of code it goes in updation condition and update code and checks condition again
untill it meats condition and condition becomes falls and than is stops)*/
//Now example is given
 for ( int c=1; c<=20; c++)
 {cout<<c<<endl;
 }
    
    /*Now we will study while loop in c++
while (condition)
{
  c++ statement;

}
    */
//Example
//Printing 1 to 40 using while loop
int d=10;
while (/* condition */ d<=100 )
{
  /* code */
  cout<<d<<endl;
  d++;
}
/*Do while loop
syntax
Do{
C++ Statement
}
while( condition);
Difference is that if condition is falls in any other loop programme will not
run and we will see no output but in do loop if condition is falls programme will
run for at least for 1 time and it will give output according to C++ statement
*/
int x=1;
do{
cout<<x<<endl;
x++;
}
while(x<=25 );
//Here is example of false condition and code should run 1 time at least
int z=1;
do{

cout<< "Here is example of false Do While loop which shows code will run at least 1 time before checking condition"<<endl;
cout<<z<<endl;
z++;
} 
while (false);

/*
Example Quiz for table of 6*/
int n=6;
for( int m=1; m<=10; m++)
{
  cout<<n*m<<endl;
  
}

   return 0; 
}