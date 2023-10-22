#include<iostream>
using namespace std;
int MaxProfit(int arr[],int size){
    int minimum=arr[0];
    int maxProfit=INT16_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
        else{
            maxProfit=max(maxProfit,arr[i]-minimum);
        }
    }
    return maxProfit;

}
int main(){
    int arr[6]={7,1,5,3,6,4};
    int arr2[5]= {7,6,4,3,1};

    cout<<MaxProfit(arr,6)<<endl;
    cout<<MaxProfit(arr2,5);
}