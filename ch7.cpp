#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
int sum(int a, int b);
void g(void);
//inline function
inline int product(int a, int b){
    int c = a*b;
    return c;
}
//default arguments
float money(int current, float factor = 1.05){

    return current*factor;
}    
//function overloading
int area(int a, int b){

     return a*b;

}   
int area(int a, int b, int c){

     return a*b*c;

} 

float area(float r , int h){
    return 3.14*r*r*h;
}

int main()
{

int num1, num2;
cout<<"enter numbers you want to add: "<<endl;
cin>>num1>>num2;
cout<<"the sum of two numbers is: "<<sum(num1,num2)<<endl;
g();

cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;
cout<<"the product of 2 numbers is: "<<product(num1, num2)<<endl;

int m = 100000;
cout<<"for people for "<<m<<" amount return is: "<<money(m)<<endl
    <<"for vips for "<<m<<" amount return is: "<<money(m,1.1)<<endl;

//function overloading
cout<<"the area of square is:"<<area(4,4)<<endl;
cout<<"the area of rectangle is:"<<area(4,5,6)<<endl;
cout<<"the area of cylinder is:"<<area(4.5f,5)<<endl;

return 0;
}
int sum(int a, int b){
    int c = a + b;
    return c;
}
void g(){
    cout<<"good morning!"<<endl;
}