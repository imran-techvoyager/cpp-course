#include<iostream>
using namespace std;

int main() {
    
    // Example of a reference variable
     float x = 34.4f;
     float & y = x; // y is a reference to x

     cout << "x = " << x << endl; // Output: x = 34.4
     cout << "y = " << y << endl; // Output: y = 34.4

     //typecasting
     int a = 40;
     float b = 40.40f;

     cout<< "value of a is: "<<a <<endl;
     cout<< "value of b is: "<<b <<endl;
     cout<< "sum of a and b is: "<<float(a)+b<<endl; // Output: sum of a and b is: 80.40
     cout<< "sum of a and b is: "<<a+b<<endl; // Output: sum of a and b is: 80.40
     cout<< "sum of a and b is: "<<int(b)+a<<endl; // Output: sum of a and b is: 80

    return 0;
} 