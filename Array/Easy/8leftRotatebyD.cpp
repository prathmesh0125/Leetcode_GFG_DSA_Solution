#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void Rotate(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int size=7;
    int d=3;
    d=d%7;
    Rotate(arr,0,d-1);
    Rotate(arr,d,size-1);
    Rotate(arr,0,size-1);
    print(arr,size);


}