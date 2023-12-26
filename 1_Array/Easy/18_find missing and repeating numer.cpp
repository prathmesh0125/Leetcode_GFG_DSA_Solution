#include<iostream>
#include<vector>
using namespace std;
vector<int> fingNumber(vector<int>&arr,int n)
{
  int b,a;
  vector<int>count(n+1,0);
  for(int i=0;i<n;i++){
    count[arr[i]]++;
    if(count[arr[i]]==2){
      b=arr[i];
    }
  }
  for(int i=1;i<=n;i++){
    if(count[i]==0){
      a=i;
    }
  }
  return {b,a};
}
int main(){
  vector<int>arr={3,1,2,5,3};
  // o/p {3,4};
   vector<int>ans=fingNumber(arr,5);
   cout<<ans[0]<<" "<<ans[1];

}