#include <iostream>
#include <iomanip>

using namespace std;

struct employee
{
    int id;
    char init;
};
typedef struct student
{
    int roll;
    char f;
}st;

// union 
union vehichle
{
    int price;
    char car;
    float milage;
};


int main()
{
    // pointers 
// &(ampercent)---->(address of) operator  
// *(pointer)--->(value at) dereferance operator  
int a =10;
int* b = &a;
cout<<a<<endl;
cout<<*b<<endl;
cout<<b<<endl;
cout<<&a<<endl;

    // pointer of pointer 
int** c = &b;
cout<<a<<endl;
cout<<*b<<endl;
cout<<b<<endl;
cout<<&a<<endl;
cout<<c<<endl;
cout<<&b<<endl;
cout<<**c<<endl;

    //  ARRAYS 
int marks[6] = {99,45,78,88,66,86};
for (int i = 0; i<=5; i++)
{
    cout<<marks[i]<<endl;
}    
cout<<"array pointers"<<endl;;
// pointer And arrays 
int* p = marks;
/*cout<<*p<<endl;
cout<<*(p++)<<endl;
cout<<*p<<endl;
cout<<*(++p)<<endl;
cout<<*p<<endl;*/
cout<<"the value of *p is: "<<*p<<endl;
cout<<"the value of *(p+1) is: "<<*(p+1)<<endl;
cout<<"the value of *(p+2) is: "<<*(p+2)<<endl;
cout<<"the value of *(p+3) is: "<<*(p+3)<<endl;
cout<<"the value of *(p+4) is: "<<*(p+4)<<endl;
cout<<"the value of *(p+5) is: "<<*(p+5)<<endl;

// structure, union and enum 
// structures
struct employee vishnu;
vishnu.id = 420;
vishnu.init = 'G';
cout<<vishnu.id<<endl;
cout<<vishnu.init<<endl;

st student1;
student1.roll = 88;
student1.f = 'F';
cout<<student1.roll<<endl;
cout<<student1.f<<endl;

//union
vehichle v1;
v1.price = 100000;
v1.milage = 70;
v1.car = 'N';
cout<<v1.price<<endl;
cout<<v1.milage<<endl;
cout<<v1.car<<endl;

//enum
enum food {breakfast, lunch, dinner};
food f1 = breakfast;
cout<<f1<<endl;
cout<<breakfast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;

return 0;
}