#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
// brute force approach with timeComplexty O(n^2)
// int sortzero(int arr[],int size){
//     for(int i=0;i<size;i++){
//         for(int j=i;j<size;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
// }

// optimal approach with timeCoplexity  O(n)
int sortzero(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        if (arr[j] == 1)
        {
            j--;
        }
        else if(arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);
            i++;
            j--;

        }

    }
}

int main()
{
    int arr[7] = {1, 1, 1, 1, 0, 1, 0};
    // int arr[12] = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};

    sortzero(arr, 7);
    print(arr, 7);
}