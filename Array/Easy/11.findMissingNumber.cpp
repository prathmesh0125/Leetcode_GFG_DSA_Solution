#include<iostream>
using namespace std;
// brute force
int missingNum(int arr[],int size){
    // int ans=0;
    // for(int i=1;i<=size;i++){
    //     for(int j=0;j<size-1;j++){

    //     if(arr[j] != i){
    //     ans= arr[j];
    //     break;
    //     }
    //     }
    // }
    // return ans;

    int i=arr[0];
    int j=0;
    // int ans=0;
    while(i<size && j<size){
        if(i!=arr[j]){
            return i;
        }
        i++;
        j++;
    }
}

// int missingNum(int arr[],int size)
// {
//     int sum1=0;
//     for(int i=0;i<size;i++){
//         sum1=sum1+arr[i];

//     }
//     int sum2=size*(size+1)/2;
//     int diff=sum2-sum1;

//     return diff;
// }

int main(){
    int arr[7]={1,2,3,4,6,7};
    cout<<missingNum(arr,7);
}