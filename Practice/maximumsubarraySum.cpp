#include <iostream>
using namespace std;

int MaximumSubarrSum(int arr[],int size){
    int maximum=INT16_MIN;
    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum=sum+arr[j];
          maximum=max(maximum,sum);
        }
    }
    return maximum;
}
// int MaximumSubarrSum(int arr[], int size)
// {
//     int maximum = INT16_MIN;
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum+=arr[i];
//         if(sum>=maximum){
//             maximum=sum;
//         }
//         else if (sum<0)
//         {
//            sum=0;
//         }
        
//     }
//     return maximum;
// }

int main()
{
    int arr[7] = {-1, 2, -3, -4, -2, 5, -2};
    // int arr[9]={-1,2,-4,-2,-5,5,7,-2,-6};

    cout << MaximumSubarrSum(arr, 7);
}