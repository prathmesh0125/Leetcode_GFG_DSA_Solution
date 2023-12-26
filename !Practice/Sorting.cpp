#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (arr[i] > arr[j])
        swap(arr[i], arr[j]);
    }
  }
}

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j< n - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void InsertionSort(int arr[],int n){
  for(int i=0;i<n;i++){
    for(int j=i;j>0;j--){
      if(arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
      }
      else{
        break;
      }
    }
  }
}
int main()
{
  int arr[5] = {9, 1, 7, 0, 5};
  // selectionSort(arr,5);
  // bubbleSort(arr, 5);
  InsertionSort(arr,5);
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
}