#include<iostream>
using namespace std;

void fibonacchiSerise(int n){
    int a=0,b=1,sum=0;
    while(n>sum){
        cout<<sum<<" ";
        
        a=b;
        b=sum;
        sum=a+b;
    }
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    fibonacchiSerise( n);

}