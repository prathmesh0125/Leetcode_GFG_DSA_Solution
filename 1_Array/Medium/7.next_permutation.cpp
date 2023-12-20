#include <bits/stdc++.h> 
#include<algorithm>
#include<iostream>


using namespace std;

void next_permu(int arr[],int size){ 
    cout<<next_permutation(arr,arr+size);
    // return arr;
}

int main(){
    int arr[3]={3,1,2};
    next_permu(arr,3);
}