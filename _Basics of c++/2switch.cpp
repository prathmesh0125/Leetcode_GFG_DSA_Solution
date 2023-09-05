#include<iostream>
using namespace std;

int main(){
    int no;
    cout<<"Enter the not for corresponding day "<<endl;
    cin>>no;

    switch (no)
    {
    case 1:

      cout<<"monday";
        break;
    case 2:

      cout<<"Tuesday";
        break;
    case 3:

      cout<<"wednesday";
        break;
    case 4:

      cout<<"Thrusday";
        break;
    case 5:

      cout<<"friday";
        break;
    case 6:

      cout<<"saturday";
        break;
    case 7:

      cout<<"sunday";
        break;
    
    default:
    cout<<"Invalid number";
        break;
    }
}