#include <iostream>
using namespace std;

int main() {

//pointers ---> it is a data type which holds the addres of other datatypes
int a = 5;
int* b = &a; // b is a pointer to a, holding the address of a
cout << "Value of a: " << a << endl; // Output: Value of a: 5
cout << "Address of a: " << &a << endl; // Output: Address of a: (some memory address)
cout << "Value of b: " << b << endl; // Output: Value of b: (address of a)
cout << "Value pointed by b: " << *b << endl; // Output: Value pointed by b: 5

//pointer to pointer
int** c = &b; // c is a pointer to pointer, holding the address of b
cout << "Address of b: " << &b << endl; // Output: Address of b: (some memory address)
cout << "Value of c: " << c << endl; // Output: Value of c: (address of b)
cout << "Value pointed by c: " << *c << endl; // Output: Value pointed by c: (address of a)
cout << "Value pointed by pointer to pointer c: " << **c << endl; // Output: Value pointed by pointer to pointer c: 5
return 0;
}