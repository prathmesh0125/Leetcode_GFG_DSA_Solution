#include<iostream>
using namespace std;
int secondSmallest(int arr[],int size){
    int smallest =arr[0];
    int secondSmallest=INT8_MAX;
    for(int i=1;i<size;i++){
        if(arr[i]<smallest){
            secondSmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secondSmallest){
            secondSmallest=arr[i];
        }
    }
    return secondSmallest;
}

int main(){
     int arr[6] = {1,2,4,7,7,5};
     cout<<secondSmallest(arr, 6);
}