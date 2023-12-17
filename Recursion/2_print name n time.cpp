#include<iostream>
using namespace std;
void printName(string s,int n){
if(n==0){
  return;
}
cout<<s<<endl;
printName(s,n-1);
}
int main(){
  string s="prathmesh";
  printName(s,5);
}