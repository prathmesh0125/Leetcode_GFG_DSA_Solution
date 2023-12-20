#include <iostream>
using namespace std;
int print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int largestElment(int arr[], int size)
{


    // bruteforce approch

    // 
    //   for(int i=0;i<size-1;i++){
    //     for(int j=i+1;j<size;j++){
    //         if(arr[i]>arr[j]){
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    //   }

    //   int large=arr[size-1];
    //   int seclarge=-1;
    //   for(int i=0;i<size;i++){
    //     if(arr[i]!=large){
    //         seclarge=arr[i];
    //     }
    //   }
    //    return seclarge;
      
// 



    // better approach
    // int largestElement=arr[0];
    // for(int i=1;i<size;i++){
    //       if(arr[i]>largestElement){
    //         largestElement=arr[i];
    //       }
    // }
    // int second=-1;
    // for(int i=0;i<size;i++){
    //     if(arr[i]>second && arr[i]!=largestElement){
    //         second=arr[i];
    //     }
    // }
    // return second;

    // optimal approach
    int largest=arr[0];
    int secLargest=-1;
    for(int i=1;i<size;i++){
       if(arr[i]>largest){
        secLargest=largest;
        largest=arr[i];
       }
      
       else if(arr[i]<largest && arr[i]>secLargest){
        secLargest=arr[i];
       }
    }
    return secLargest;
}

int main()
{
    int arr[6] = {1,2,4,7,7,5};
     cout<<largestElment(arr, 6);
    // print(arr,5);
}