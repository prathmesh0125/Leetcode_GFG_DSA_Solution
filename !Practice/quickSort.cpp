#include <iostream>
using namespace std;
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int partition(int arr[], int start, int end)
{
  int pos = start;
  for (int i = start; i <= end; i++)
  {
    if (arr[i] <= arr[end])
    {
      swap(arr[i], arr[pos]);
      pos++;
    }
  }
  return pos - 1;
}
void quickSort(int arr[], int start, int end)
{
  if (start >= end)
  {
    return;
  }
  int pivot = partition(arr, start, end);
  quickSort(arr, start, pivot - 1);
  quickSort(arr, pivot, end);
}
int main()
{
  int arr[6] = {3, 2, 1, 4, 5, 3};
  quickSort(arr, 0, 5);
  print(arr, 6);
}