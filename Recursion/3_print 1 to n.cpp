#include<iostream>
using namespace std;
void print1Ton(int n){
  if(n==1){
    cout<<n<<" ";
    return;
  }
    cout<<n<<" ";

  print1Ton(n-1);
  // if(i==n){
  // cout<<i<<" ";
  //   return;
  // }
  // cout<<i<<" ";
  // print1Ton(i+1,n);
}
int main(){
  int n=10;
  print1Ton(n);
}
