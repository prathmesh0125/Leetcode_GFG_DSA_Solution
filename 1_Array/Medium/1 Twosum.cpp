
#include <iostream>
using namespace std;

// brute force approach with timecoplexcity O(n^2)
// int TwoSum(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if(arr[i]==arr[j]){
//                 continue;
//             }
//             if (arr[i] + arr[j] == target)
//             {
//                 return i;
//                 // return j;
//                 // cout<<i<<" "<<j<<endl;
//             }
//         }
//     }
//     return false;
//     // cout<<"not found"<<endl;
// }

// optimal approach
void TwoSum(int arr[], int size, int target)
{
    int i = 0;
    int j = size-1;
    while (i < size && j < size)
    {
        // cout<<i<<" "<<j<<endl;
        if (arr[i] + arr[j] <target)
        {
            i++;

        }
        else if(arr[i]+arr[j]==target){
            cout<<i <<" "<<j;
            break;
        }
        else{

              j--;
        }
        
        
    }
        // i++;
    // cout<<"not found";
}
int main()
{
    int arr[5] = {2, 8, 5, 6, 11};
    int target = 16;
    // cout << TwoSum(arr,5, target);
    TwoSum(arr, 5, target);
}