#include <iostream>
using namespace std;

// brute force solution TimeComplexty is O(n^2)
// int MajorityEle(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cnt++;
//             }
//         }
//         if (cnt > size / 2)
//         {
//             return arr[i];
//         }
//     }
//   return -1;
// }
int MajorityEle(int arr[], int size)
{
    int count = 0;
    int element;
    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            count = 1;
            element = arr[i];
        }
        else if (arr[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cnt1++;
        }
    }
    if (cnt1 > size / 2)
    {
        return element;
    }
}

int main()
{
    int arr[9] = {3, 2, 3, 1, 3, 1, 3, 3, 1};
    cout << MajorityEle(arr, 9);
}