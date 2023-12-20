#include<iostream>
using namespace std;

int LongestSubarrayLength(int arr[],int k,int size){

    // brute foce with Time complexity O(n^3)
    // int len=0;
    // for(int i=0;i<size;i++){
    //         int sum=0;
    //     for(int j=i;j<size;j++){
    //         for(int k=i;k<=j;k++){
    //             sum += arr[k];
    //             if(sum==k){
    //              len=max(len,j-i+1);
    //             }
    //         }
    //     }
    // }
    // return len;

    // optiml brute force with timecoplexity O(n^2)
     int len=0;
    for(int i=0;i<size;i++){
            int sum=0;
        for(int j=i;j<size;j++){
                sum += arr[j];
                if(sum==k){
                 len=max(len,j-i+1);
                }
        }
    }
    return len;
}

int main(){
    int arr[10]={1,2,3,1,1,1,1,4,2,3};
    int k=3;
    cout<<LongestSubarrayLength(arr,k,10);
}