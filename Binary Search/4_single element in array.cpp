#include <iostream>
using namespace std;
// brute force O(n)
// int Singlelement(int arr[], int n)
// {
//   if (n == 1)
//     return arr[0];
//   for (int i = 0; i < n; i++)
//   {
//     if (i == 0)
//     {
//       if (arr[i] != arr[i + 1])
//         return arr[i];
//     }
//     else if (i == n - 1)
//     {
//       if (arr[i] != arr[i - 1])
//         return arr[i];
//     }
//     else
//     {
//       if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
//       {
//         return arr[i];
//       }
//     }
//   }
// }

// optimal solution O(logn)
int Singlelement(int arr[], int n)
{
  if (n == 1)
    return arr[0];
  if (arr[0] != arr[1])
    return arr[0];
  if (arr[n - 1] != arr[n - 2])
    return arr[n - 1];
  int start = 1;
  int end = n - 2;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
    {
      return arr[mid];
    }
    if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || mid % 2 == 0 && arr[mid] != arr[mid + 1])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int arr[11] = {1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65};
  cout << Singlelement(arr, 11);
}