#include <iostream>
#include <iomanip>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
// Define a structure
struct employee
{
    int roll;
    string name;
    float salary;
};

typedef struct student
{

    int roll_no;
    float cgpa;

} stu;

int main()
{

    int x = 10, y = 20;
    cout << "the sum of x and y is:" << sum(x, y) << endl;

    // Declare a structure variable
    employee imran;

    // Assign values to the structure members
    imran.roll = 100;
    imran.salary = 1.5;

    // Access and display structure members
    cout << imran.roll << endl;
    cout << imran.salary << endl;

    stu student1, student2, student3;

    student1.roll_no = 101;
    student1.cgpa = 89.9;
    student2.roll_no = 102;
    student2.cgpa = 77.5;
    student3.roll_no = 103;
    student3.cgpa = 99.3;

    cout << student1.roll_no << endl;
    cout << student1.cgpa << endl;
    cout << student2.roll_no << endl;
    cout << student2.cgpa << endl;
    cout << student3.roll_no << endl;
    cout << student3.cgpa << endl;

    return 0;
}