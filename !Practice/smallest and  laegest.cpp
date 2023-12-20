#include<iostream>
using namespace std;
int smallest(int arr[],int size){
    int small=arr[0];
for(int i=0;i<size;i++){
    if(arr[i]<small){
        small=arr[i];
    }
}
return small;
}

int SecSmallest(int arr[],int size){
    int small=INT16_MAX;
    int secSmall=0;
    for(int i=0;i<size;i++){
        if(arr[i]<small){
           secSmall=small;
           small=arr[i];
        }
        else if(arr[i]>small && arr[i] <secSmall)
        {
            secSmall=arr[i];

        }
    }
    return secSmall;
}


int Largest(int arr[],int size){
    int largest=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }
    return largest;


}
int SecLargest(int arr[],int size){
    int largest=arr[0];
    int seclargest=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>seclargest){
            seclargest=arr[i];
        }
    }
    return seclargest;
}

int main(){
    int arr[7]={13,12,3,2,3,2,1};
    cout<<"Small element is: "<<smallest(arr,7)<<endl;
    cout<<"Second smallest is: "<<SecSmallest(arr,7)<<endl;
    cout<<"Largest element is: "<<Largest(arr,7)<<endl;
    cout<<"Second Largest is: "<<SecLargest(arr,7)<<endl;
    


}