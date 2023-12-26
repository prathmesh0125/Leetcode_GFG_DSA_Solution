#include <iostream>
#include <vector>
using namespace std;
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

void merge(int arr[], int start, int mid, int end)
{
  vector<int> temp(end-start + 1);
  int left = start;
  int right = mid + 1;
  int index = 0;

  while (left <= mid && right <= end)
  {
    if (arr[left] <= arr[right])
    {
      temp[index] = arr[left];
      index++, left++;
    }
    else
    {
      temp[index] = arr[right];
      index++, right++;
    }
  }
  while (left <= mid)
  {
    temp[index] = arr[left];
    index++, left++;
  }
  while (right <= end)
  {
    temp[index] = arr[right];
    index++, right++;
  }
  index = 0;
  while (start <= end)
  {
    arr[start] = temp[index];
    start++, index++;
  }
}

void mergeSort(int arr[], int start, int end)
{
  if (start == end)
  {
    return;
  }
  int mid = (start + end) / 2;
  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);
  merge(arr, start, mid, end);
}
int main()
{
  int arr[7] = {3, 2, 1, 5, 6, 7, 9};
  mergeSort(arr, 0, 6);
  print(arr,7);
}