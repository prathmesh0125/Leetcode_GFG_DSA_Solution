#include <iostream>
using namespace std;
void print(int arr[], int n)
{
  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";
    cout<<endl;
}
void rev(int arr[], int i, int n)
{
  if(i>=n)return ;
  swap(arr[i],arr[n]);

  rev(arr,i+1,n-1);

}
void rev1(int arr[], int i, int n)
{
  if(i>=n/2)return ;
  swap(arr[i],arr[n-i-1]);

  rev1(arr,i+1,n);

}
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  print(arr, 5);
  // rev(arr, 0, 4);
  // print(arr, 5);
  rev1(arr, 0, 5);
  print(arr, 5);


}