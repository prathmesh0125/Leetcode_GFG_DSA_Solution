#include<iostream>
using namespace std;
bool palindrome(int n){
    int temp=n,rem,reverse;
    while(n>0){
        rem=n%10;
        reverse=(reverse*10)+rem;
        n=n/10;
    }
    if(temp==reverse){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    cout<<palindrome(n);
}