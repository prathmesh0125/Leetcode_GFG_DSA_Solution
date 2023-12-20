#include<iostream>
using namespace std;
void sum(int i,int ans){
  if(i<1)
  {
    cout<<ans;
    return;
  }
  sum(i-1,ans+i);
}
int sum1(int n){
  if(n==1){
    return 1;
  }
  return n+sum1(n-1);
}
int main(){
  int n=3;
  sum(n,0);
  cout<<endl;
 cout<<sum1(n);
}