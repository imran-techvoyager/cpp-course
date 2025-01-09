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

int fibonacci(int f){

     if(f<2){
          return 1;
     }

     return fibonacci(f-2)+fibonacci(f-1);
}

int main()
{
     
     int a;
     cout<<"enter the number you want factorial of:"<<endl;
     cin>>a;
     cout<<"the factorial of "<<a<<" is: "<<factorial(a)<<endl;
     int b;
     cout<<"enter the number you want fibonacci of:"<<endl;
     cin>>b;
     cout<<"the fibonacci of "<<b<<" is: "<<fibonacci(b)<<endl;

return 0;
}