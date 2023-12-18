#include<iostream>
using namespace std;
void print1Ton(int n){
  if(n==0){
    return;
  }
  cout<<n<<" ";
  print1Ton(n-1);
}
int main(){
  int n=10;
  print1Ton(n);
}
