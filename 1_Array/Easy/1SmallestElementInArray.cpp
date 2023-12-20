#include<iostream>
using namespace std;
int SmallestElement(int arr[],int size){
    int smallest=arr[0];
    for (int i = 1; i < size; i++)
    {
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return smallest;
    
}

int main(){
    int arr[7]={5,3,2,4,5,1,0};
    cout<<SmallestElement(arr,7);
}