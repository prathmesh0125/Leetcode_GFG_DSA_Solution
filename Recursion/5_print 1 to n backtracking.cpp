#include<iostream>
using namespace std;
void print1ToN(int i,int n){
  if(i<1)
  return;
  print1ToN(i-1,n);
  cout<<i<<" ";
}
int main(){
  int n=3;
  print1ToN(n,n);
}