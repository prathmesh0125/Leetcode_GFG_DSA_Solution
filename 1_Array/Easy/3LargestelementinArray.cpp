#include<iostream>
using namespace std;
int largestElment(int arr[] ,int size){
    int largestElement=arr[0];
    for(int i=1;i<size;i++){
          if(arr[i]>largestElement){
            largestElement=arr[i];
          }
    }
    return largestElement;
}

int main(){
    int arr[5]={23,34,13,23,43};
   cout<<largestElment(arr,5);
}