#include<iostream>
using namespace std;
int SecondSmallest(int arr[],int n){
  int smallest=arr[0];
  int SecondSmallest=0;
  for(int i=0;i<n;i++){
    if(arr[i]<smallest){
      SecondSmallest=smallest;
      smallest=arr[i];
    }
    else if(arr[i]>smallest && arr[i]<SecondSmallest ){
      SecondSmallest=arr[i];
    }
  }
  return SecondSmallest;
}
int SecondLargest(int arr[],int n){
  int largest=arr[0];
  int seondLargest=0;
  for(int i=0;i<n;i++){
    if(arr[i]>largest){
      seondLargest=largest;
      largest=arr[i];

    }
    else if(arr[i]<largest && arr[i]>seondLargest){
      seondLargest=arr[i];
    }

  }
  return seondLargest;
}
int main(){

  int arr[6]={2,1,3,4,5,3};
  cout<<SecondSmallest(arr,6)<<endl;
  cout<<SecondLargest(arr,6)<<endl;

}