#include<iostream>
using namespace std;

// the value make it his copy and only update the copy not orignal value
// when we print the orignal value the was not updated

void update(int a){
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