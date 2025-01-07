#include <iostream>
#include <iomanip>
using namespace std;

//call by value
int swapvar(int a, int b){
    int temp = a;
        a = b;
        b = temp;
}
//call by pointer
int swapvarpointer(int* a, int* b){
    int temp = *a;
        *a = *b;
        *b = temp;
}
//call by reference variable
int swapvarrefrencevar(int &a, int &b){
    int temp = a;
        a = b;
        b = temp;
}


int main()
{
    int x = 10, y = 20;
    cout<<"the value of x is: "<<x<<endl;
    cout<<"the value of y is: "<<y<<endl;

    cout<<"after swapvar"<<endl;
    swapvar(x,y);
    cout<<"the value of x is: "<<x<<endl;
    cout<<"the value of y is: "<<y<<endl;

    cout<<"after swapvarpointer"<<endl;
    swapvarpointer(&x, &y);
    cout<<"the value of x is: "<<x<<endl;
    cout<<"the value of y is: "<<y<<endl;

    cout<<"after swapvarrefrencevar"<<endl;
    swapvarrefrencevar(x,y);
    cout<<"the value of x is: "<<x<<endl;
    cout<<"the value of y is: "<<y<<endl;

return 0;
}