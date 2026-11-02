#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  void getAllSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &AllSubsets)
  {
    if (i == nums.size())
    {
      AllSubsets.push_back(ans);
      return;
    }
    // include
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i + 1, AllSubsets);

    // Backtracking
    ans.pop_back();

    // exclude
    getAllSubsets(nums, ans, i + 1, AllSubsets);
  }

  vector<vector<int>> subsets(vector<int> &nums)
  {
    vector<vector<int>> AllSubsets;
    vector<int> ans;
    getAllSubsets(nums, ans, 0, AllSubsets);
    return AllSubsets;
  }
};


int main()
{
  Solution sol;
  vector<int> nums = {1, 2, 3};
  vector<vector<int>> result = sol.subsets(nums);

  for (auto &subset : result)
  {
    cout << "[ ";
    for (int val : subset)
      cout << val << " ";
    cout << "]" << endl;
  }
  return 0;
}
// Output:
// [ 1 2 3 ]
// [ 1 2 ]
// [ 1 3 ]
// [ 1 ]
// [ 2 3 ]
// [ 2 ]
// [ 3 ]
// [ ]
 