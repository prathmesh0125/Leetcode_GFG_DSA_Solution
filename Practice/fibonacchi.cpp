#include<iostream>
using namespace std;
void fiboonachi(int n){
  int a=0,b=1,ans=0;
  for(int i=0;i<n;i++){
    cout<<ans<<" ";
    a=b;
    b=ans;
    ans=a+b;
  }

}
int fib(int n){
  if(n<=1)
  return n;
  
  return fib(n-1)+fib(n-2);
}
int main(){
  int n=10;
  fiboonachi(n);
  cout<<endl;
  for (int i = 0; i < n; i++)
  {
   
  cout<<fib(i)<<" ";
  }
  
}