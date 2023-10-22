#include <bits/stdc++.h> 
#include<iostream>


using namespace std;

int next_permu(int &arr[],int size){ 
    next_permutation(arr.begin(),arr.end());
    return arr;
}

int main(){
    int arr[3]={3,1,2};
    cout<<next_permu(arr,3);
}