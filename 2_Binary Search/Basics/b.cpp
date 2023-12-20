#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid=(low+high)/2;
    }
    return -1;
}
int main()
{
    int arr[8] = {3, 4, 6, 7, 9, 12, 16, 17};
    int n = 8;
    int key = 17;
    cout << BinarySearch(arr, 8, key);
}