#include<iostream>
using namespace std;

bool Ispalidrome(int n){
  int temp=n,ans=0,rem=0;
  while(n){
   rem=n%10;
   ans=ans*10+rem;
   n/=10;
  }
  if(temp==ans)
  return 1;
  else
  return 0;

}
int main(){
  int n=123;
  cout<<Ispalidrome(n);
}