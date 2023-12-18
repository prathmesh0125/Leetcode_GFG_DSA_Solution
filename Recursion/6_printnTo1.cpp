#include<iostream>
using namespace std;
void print1ToN(int i,int n){
  if(n<i)
  return;
  print1ToN(i+1,n);
  cout<<i<<" ";
}
int main(){
  int n=10;
  print1ToN(1,n);
}