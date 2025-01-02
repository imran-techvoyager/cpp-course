#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    int x;
    // example to write 6 table with for loop
    for (int i = 1; i <= 10; i++)
    {
        cout << "6 * " << i << " = " << 6 * i << endl;
    }
    // writing any table user wishes

    cout << "enter the number for which you wish to write a table: " << endl;
    cin >> x;
    cout << "table for " << x << " is: " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << x << " * " << i << " = " << x * i << endl;
    }

    return 0;
}