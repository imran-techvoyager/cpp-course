#include <iostream>
using namespace std;

int main() {

//pointer arithmetic
int arr[] = {10, 20, 30, 40, 50};
int* p = arr; // ptr points to the first element of arr

cout <<"the value of *p is: "<<*p<<endl;
cout <<"the value of *(p+1) is: "<<*(p+1)<<endl;
cout <<"the value of *(p+2) is: "<<*(p+2)<<endl;
cout <<"the value of *(p+3) is: "<<*(p+3)<<endl;
cout <<"the value of *(p+4) is: "<<*(p+4)<<endl;

cout<<*(p++)<<endl;
cout<<*p<<endl;
cout<<*(++p)<<endl;

return 0;
}