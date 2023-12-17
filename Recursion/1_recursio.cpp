#include<iostream>
using namespace std;
int cnt=0;
void fuc(){
  if(cnt==10){
    return;
  }
  cout<<cnt++<<endl;
fuc();
}
int main(){
  fuc();
}