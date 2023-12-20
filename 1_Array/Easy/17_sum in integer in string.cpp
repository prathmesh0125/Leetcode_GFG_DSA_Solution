#include<iostream>
using namespace std;
int Sum(string s){
  int sum=0;
  int num=0;
  for(int i=0;i<s.length();i++){
    if(s[i]>='1' && s[i]<='9'){
      num=num*10+s[i]-'0';
    }
    else{
      sum+=num;
      num=0;
    }
  }
  return sum+num;
}
int main(){
  string s="1abc23";
  cout<<Sum(s);
}