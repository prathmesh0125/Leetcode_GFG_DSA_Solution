#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[0].size(); j++)
    {
      cout << arr[i][j] << " ";
    }
    cout<<endl;
  }
}
void permutation(vector<int> &arr, vector<vector<int>> &ans, int index)
{
  // base condition
  if (index == arr.size())
  {
    ans.push_back(arr);
    return;
  }
  vector<bool>used(21,0);
  for (int i = index; i < arr.size(); i++)
  {
    if(used[arr[i]+10]==0){
    swap(arr[index], arr[i]);
    permutation(arr, ans, index + 1);
    swap(arr[index], arr[i]);
    used[arr[i]+10]=1;
    }
  }
}

int main()
{
  vector<int> arr = {1, 1, 3};
  vector<vector<int>> ans;
  permutation(arr, ans, 0);
  print(ans);
}