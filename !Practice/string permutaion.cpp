#include <iostream>
#include <vector>
using namespace std;
void permute(string &s, vector<string> &ans, int index)
{
  if (index == s.size())
  {
    ans.push_back(s);
    return;
  }

  vector<bool> used(52, 0);
  for (int i = index; i < s.size(); i++)
  {
    char currentchar = (s[i] >= 'a' && s[i] <= 'z') ? s[i] : s[i] - 'A' + 'a';

    if (used[currentchar - 'a'] == 0)
    {
      swap(s[i], s[index]);
      permute(s, ans, index + 1);
      swap(s[i], s[index]);
      used[currentchar - 'a'] = 1;
    }
  }
}

int main()
{
  string s = "aac";
  vector<string> ans;
  permute(s, ans, 0);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}