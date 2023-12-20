#include<iostream>
using namespace std;
bool Check(int arr[],int size){
    for(int i=1;i<size;i++){
        if(arr[i]>=arr[i-1]){
            
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[6]={1,2,3,4,6,5};

    cout<<Check(arr1,5)<<endl;
    cout<<Check(arr2,6)<<endl;
}