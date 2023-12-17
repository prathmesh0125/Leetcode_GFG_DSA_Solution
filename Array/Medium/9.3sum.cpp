
#include <iostream>
using namespace std;

int TwoSum(int arr[], int size, int target)
{
    for (int k = 0; k < size - 2; k++)
    {
        int i = k + 1;
        int j = size - 1;
        int ans = target - arr[k];
        while (i <= j)
        {
            // cout<<i<<" "<<j<<endl;
            if (arr[i] + arr[j] < ans)
            {
                i++;
            }
            else if (arr[i] + arr[j] == ans)
            {
                // cout<<k<<" "<<i <<" "<<j<<endl;
                return 1;
            }
            else
            {

                j--;
            }
        }
    }
    // i++;
    // cout<<"not found";
}
int main()
{
    int arr[5] = {2, 8, 5, 6, 11};
    int target = 22;
    // cout << TwoSum(arr,5, target);
    cout << TwoSum(arr, 5, target);
}