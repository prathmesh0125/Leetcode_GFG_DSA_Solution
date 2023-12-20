#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// brute force approach with Time Coplexity O(n^2)
// int Sort012(int arr[],int size){
//     for(int i=0;i<size;i++){
//         for(int j=i;j<size;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
// }

// optimal solution with time coplexity O(n)
// Detch national flag algorithem
int Sort012(int arr[], int size)
{

    int low = 0;
    int mid = 0;
    int high = size - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[12] = {0, 0, 2, 2, 0, 2, 1, 2, 0, 1, 1, 2};
    Sort012(arr, 12);
    print(arr, 12);
}