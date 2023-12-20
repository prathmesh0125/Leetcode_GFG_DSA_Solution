#include<iostream>
using namespace std;
bool IsPalidrome(string &s,int start,int end){
  if(start>=end){
    return true;
  }
  else if(s[start]!=s[end]){
    return false;
  }
 return IsPalidrome(s,start+1,end-1);
}
bool IsPalidrome1(string &s,int start,int n){
  if(start>=n/2){
    return true;
  }
  else if(s[start]!=s[n-start-1]){
    return false;
  }
 return IsPalidrome1(s,start+1,n);
}
int main(){
  string s="naman";
  cout<<IsPalidrome(s,0,s.size()-1);
  cout<<IsPalidrome1(s,0,s.size());

}