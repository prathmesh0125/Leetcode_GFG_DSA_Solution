#include<iostream>
using namespace std;
int length=nums.size();
HashSet<Interger>h=newHashset<>();
for(int i=1;i<<=k;i++){
    h.add(i);
}
int ans=0;
for(int i=length;i>=0;i--){
    int val=nums.get(i);
    if(h.contains(vak)){
        h.remove(val);
    }
    ans++;
    if(h.size()==0){
        break;

    }
    return ans;
}