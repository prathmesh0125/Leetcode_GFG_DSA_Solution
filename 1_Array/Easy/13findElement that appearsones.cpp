#include <iostream>
using namespace std;
// Bruteforce approach

int findappones(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int num =arr[i];
        int cnt = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j]==num)
            {
                cnt = cnt + 1;
            }

        }
            if (cnt == 1)
            {
                return num;
            }
    }
}

// optimal approach
// int FindAppOnes(int arr[],int  size){
// int ans=0;
// for(int i=0;i<size;i++){
//     ans=ans^arr[i];
// }
// return ans;
// }
int main()
{
    int arr[7] = {1, 1, 2, 2, 3, 4, 4};
    // cout<<FindAppOnes(arr,7);
    cout << findappones(arr, 7);
}