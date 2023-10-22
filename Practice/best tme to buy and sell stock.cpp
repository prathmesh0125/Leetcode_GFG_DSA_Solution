#include<iostream>
using namespace std;

int BestTimetobuy(int arr[],int size)
{
    int maximum=0;
    int minimum=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
        else {
            maximum=max(maximum,arr[i]-minimum);
        }
    }
    return maximum;
}
 
int main(){
    int arr[6]={7,1,5,3,6,4};
    cout<<BestTimetobuy(arr,6);
}