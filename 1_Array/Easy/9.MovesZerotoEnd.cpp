#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
}

int movetoend(int arr[], int size){
    for(int i=0;i<=size;i++){

        for(int j=i+1;j<size;j++){
            if(arr[i]==0){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int moveZeros(int arr[],int size){
    int i=0;
    int j=0;
    // int n=size;
    while(i<size && j<size){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }

    
}

int main(){
    int arr[10]={1,0,2,0,23,42,34,4,0,0};
    movetoend(arr,10);

    print(arr,10);
    cout<<endl;
    moveZeros(arr,10);
    print(arr,10);

}