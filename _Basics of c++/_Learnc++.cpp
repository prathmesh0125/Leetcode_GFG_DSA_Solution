#include <iostream>
using namespace std;

int main()
{
    //   datatypes
    // int,lon,long long,float,double
    // string and getline
    // char

    // Write a prgram that takes an input of age and print if you are adult are not

    // int age;
    // cout << "Enter your age" << endl;
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "you are adult" << endl;
    // }
    // else
    // {
    //     cout << "you are not adult" << endl;
    // }

    /* a school has following rules for following rules for grading systeam:
    a.Below25  -F
    b.25 to 44 -E
    c.45 to 49 -D
    d.50 to 59 -C
    e.60 to 79 -B
    f.80 to 100 -A

    Ask user to print their correspoding grade
    */

   int mark;
   cout<<"Enter your marks to check ypur grade "<<endl;

   cin>>mark;
   if(mark>=0 && mark<=25){
    cout<<"F"<<endl;
   }
   else if (mark>25 && mark<44)
   {
        cout<<"E"<<endl;

   }
   else if (mark>=45 && mark<=49)
   {
        cout<<"D"<<endl;

   }
   else if (mark>=50 && mark<=59)
   {
        cout<<"C"<<endl;

   }
   else if (mark>=60 && mark<=79)
   {
        cout<<"B"<<endl;

   }
   else if (mark>=80 && mark<=100)
   {
        cout<<"A"<<endl;

   }

   else{
    cout<<"The Mark is not valid "<<endl;
   }
   

}