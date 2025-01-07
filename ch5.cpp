#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


int main(){

        //  conditional statment 
        // if-else ladder 
         int age;
         cout<<"enter your age"<<endl;
         cin>>age;
         if ((age<18)&&(age>0))
         {
            cout<<"you are below 18 not allowed to the party"<<endl;
         }
         else if (age==18)
         {
            cout<<"you are 18 and you only get kids pass for the party"<<endl;
         }
         else if (age<1)
         {
            cout<<"you are not born yet"<<endl;
         }
         
         else{
            cout<<"you are an adult and allowed to the party with adults pass"<<endl;
         }

        //  switch case statment
        /*in switch case statments(scs) only integer and character values are allowed
          in scs in case: we cannot use range of value or conditions instead only values*/ 
        int marks;
        cout<<"enter your marks";
        cin>>marks;
        switch (marks)
        {
        case 90:
            cout<<"your grade is A";
            break;
        case 80:
            cout<<"your grade is B";
            break;
        case 70:
            cout<<"your grade is C";
            break;
        case 60:
            cout<<"your grade is D";
            break;
        case 40:
            cout<<"your grade is E";
            break;
        
        default:
            cout<<"you are failed";
            break;
        }
         
         

    return 0;
}