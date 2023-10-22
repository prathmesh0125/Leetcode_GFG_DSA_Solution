#include <iostream>
using namespace std;
int upperBound(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    int mid = low + (high - low) / 2;
    int ans = size;
    while (low <= high)
    {
        if (arr[mid] > key)
        {
            ans = mid;
            high = mid - 1;
        }
        
        else
        {
            low= mid + 1;
        }
        mid = low + (high - low) / 2;
    }
    return ans;
}

int main()
{
    int arr[6] = {3, 8, 8, 8, 15, 19};
    int key = 8;
    cout << upperBound(arr, 6, key);
}