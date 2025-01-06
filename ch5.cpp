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
            cout<<"you are below 18 not allowed to the party";
         }
         else if (age==18)
         {
            cout<<"you are 18 and you only get kids pass for the party";
         }
         else if (age<1)
         {
            cout<<"you are not born yet";
         }
         
         else{
            cout<<"you are an adult and allowed to the party with adults pass";
         }

        //  switch case statment 
        int marks;
        cout<<"enter your marks";
        cin>>marks;
        switch (marks)
        {
        case >90:
            cout<<"your grade is A";
            break;
        case >80<90:
            cout<<"your grade is B";
        
        default:
            break;
        }
         
         

    return 0;
}