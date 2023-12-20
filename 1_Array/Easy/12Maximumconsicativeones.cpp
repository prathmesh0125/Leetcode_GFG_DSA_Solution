#include<iostream>
using namespace std;

int maximumConsicative(int arr[],int size){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            cnt=cnt+1; 
            maxi=max(cnt,maxi);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}

int main(){
    int arr[11]={1,1,0,1,1,1,1,0,1,1,1};
  cout<<maximumConsicative(arr,9);
}