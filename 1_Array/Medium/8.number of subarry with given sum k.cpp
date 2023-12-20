#include <iostream>
using namespace std;
#include <unordered_map>
// brute force Time complexity O(n^3);
// int MaxSubarrray(int arr[], int size, int key)
// {
//     int maximum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i; j < size; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {

//                 sum += arr[k];
//             }
//             if (sum == key)
//             {
//                 maximum++;
//             }
//         }
//     }
//     return maximum;
// }

// better solution with T.C O(n^2)

// int MaxSubarrray(int arr[],int size,int k){
//     int ans=0;
//     for(int i=0;i<size;i++){
//         int sum=0;
//         for(int j=i;j<size;j++){
//             sum+=arr[j];
//             if(sum==k){
//                 ans++;
//             }
//         }
//     }
//     return ans;
// }

// optimal  solution by using unordered_map with time copplexity O(nlogn)

int MaxSubarrray(int arr[], int n, int k)
{
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int presum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        presum += arr[i];
        int remove = presum - k;
        cnt += mpp[remove];
        mpp[presum] += 1;
    }
    return cnt;
}
int main()
{
    int arr[10] = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int key = 3;
    cout << MaxSubarrray(arr, 10, key);
}