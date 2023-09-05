#include<iostream>
using namespace std;

// the orignal value will be  update they does not make  any copy .
// when we print the orignal value the value will be  updated
// only use & symbol
void update(int &a){
    a+=5;
    cout<<a<<endl;
    a+=10;
    cout<<a<<endl;
}

int main()
{
    int a=10;
    update(a);
    cout<<a;
}