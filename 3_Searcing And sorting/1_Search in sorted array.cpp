#include<iostream>
using namespace std;
int Search(int arr[],int start,int end,int key){
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]<key){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
  }
  return -1;
}
int main(){
  int arr[5]={1,2,3,4,5};
  int key=5;
  cout<<Search(arr,0,4,key);
}