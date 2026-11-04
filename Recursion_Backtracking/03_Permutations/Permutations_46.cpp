#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void getperms(vector<int> &nums, int idx, vector<vector<int>> &ans)
  {
    if (idx == nums.size())
    {
      ans.push_back(nums);
      return;
    }
    for (int i = idx; i < nums.size(); i++)
    {
      swap(nums[idx], nums[i]);
      getperms(nums, idx + 1, ans);
      swap(nums[idx], nums[i]); // wapas undo karo
    }
  }
  vector<vector<int>> permute(vector<int> &nums)
  {
    vector<vector<int>> ans;
    getperms(nums, 0, ans);
    return ans;
  }
};

int main()
{
  Solution s;
  vector<int> nums = {1, 2, 3};
  vector<vector<int>> ans = s.permute(nums);

  for (auto v : ans)
  {
    for (int x : v)
    {
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}
