#include<iostream>
using namespace std;

void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int partition(int arr[],int start,int end){
  int pos=start;
  for(int i=start;i<=end;i++)
  {
    if(arr[i]<=arr[end]){
      swap(arr[i],arr[pos]);
      pos++;
    }
  }
  return pos-1;
}

void QuickSort(int arr[],int start,int end){

if(start>=end){
  return;
}

int pivot= partition(arr,start,end);
QuickSort(arr,start,pivot-1);
QuickSort(arr,pivot,end);
}

int main(){
  int arr[7]={4,2,3,1,5,6,7};
  QuickSort(arr,0,7);
  print(arr,7);
}