#include <iostream>
using namespace std;

// brute force time complexity is O(n^3)
// int MaxSubarrraySum(int arr[], int size)
// {
//     int maximum = INT16_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i; j < size; j++)
//         {
//             int sum = 0;
//             for (int k = i; k<j; k++)
//             {

//             sum += arr[k];
//             maximum=max(sum,maximum);
//             }

//         }
//     }
//         return maximum;
// }

// Better soultion with time coplexity o(n^2)

int MaxSubarrraySum(int arr[], int size)
{
    int maximum = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            maximum = max(sum, maximum);
        }
    }
    return maximum;
}

// Optimal solution by kadan's algorithem
// int MaxSubarrraySum(int arr[], int size)
// {
//     int maximum = INT16_MIN;
//     int sum = 0;
//     for (int i = 0; i < size; i++)

//     {
//         sum += arr[i];

//         if (sum > maximum)
//         {
//             maximum = sum;
//         }
//        else if (sum < 0)
//         {
//             sum = 0;
//         }
//     }
//     return maximum;
// }

int main()
{
    // int arr[8] = {1,2,-2,-3,-5,6,7};
    int arr[9]={-1,2,-4,-2,-5,5,7,-2,-6};

    // int ans=7;
    cout << MaxSubarrraySum(arr, 9);
}