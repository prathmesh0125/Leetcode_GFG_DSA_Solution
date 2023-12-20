#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int RotateOne(int arr[],int n){
    int first=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
}

void Rotate(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}


int main(){
    int arr[5]={1,2,3,4,5};
    // int d=5;
    // RotateOne(arr,5);
    // print(arr,5);

    // cout<<endl;
    // Rotate(arr,0,d-2);
    // Rotate(arr,d-1,d);
    // Rotate(arr,0,d-1);
    
    // print(arr,5);

}