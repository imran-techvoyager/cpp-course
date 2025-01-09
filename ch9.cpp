#include <iostream>
#include <iomanip>
using namespace std;

   //recursions and recursive functions

int factorial(int n){
     if(n<=1){
          return 1;
     }
     return n*factorial(n-1);
}

int main()
{
     
     int a;
     cout<<"enter the number you want factorial of:"<<endl;
     cin>>a;
     cout<<"the factorial of "<<a<<" is: "<<factorial(a)<<endl;

return 0;
}