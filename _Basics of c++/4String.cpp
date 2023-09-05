#include<iostream>
using namespace std;

void print(char s[],int size){
    for(int i=0;i<size;i++){
        cout<<s[i];
    }
}

int revese(char s[],int size){
    int i=0;
    int j= size-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }

}

int main(){
    char  s[9]={'p','r','a','t','h','m','e','s','h'};
    // int size=9;
    print(s,9);
    revese(s,9);
    cout<<endl;
    print(s,9);
    // cout<<s;


    // cout<<s;
}