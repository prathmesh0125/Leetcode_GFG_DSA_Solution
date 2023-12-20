#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int UnionOfArray(int arr1[], int size1, int arr2[], int size2)
{
    int i = 0;
    int j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {2, 3, 4, 5, 6};
    UnionOfArray(arr1, 6, arr2, 5);
    // print(arr1,6,arr2,5);
}