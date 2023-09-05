#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
}

int getInput(int arr[] ,int size){
    for(int i=0;i<size;i++){
    cin>>arr[i];
    }
}

int add(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        
    }
    return sum;
}

int main(){
    // int arr[10];
    // cout<<"Enter the value of arrray"<<endl;
    //  getInput(arr,10);
    //  print(arr,10);
    //  cout<<endl;
    //  cout<<add(arr,10);


    // 2D Array;
    int arr[2][3];
    arr[2][2]=5;
    cout<<arr[2][3];

}