#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution
{
public:
  void getAllSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets)
  {
    
    if (i == nums.size())
    {
      allSubsets.push_back(ans);
      return;
    }

    // 1. INCLUDE CASE: 
    ans.push_back(nums[i]);                     
    getAllSubsets(nums, ans, i + 1, allSubsets); 

    // 2. BACKTRACKING: 
    ans.pop_back();

    // 3. DUPLICATE SKIP LOGIC: 
    int idx = i + 1;
    while (idx < nums.size() && nums[idx] == nums[idx - 1])
    {
      idx++; 
    }

    // 4. EXCLUDE CASE:
    getAllSubsets(nums, ans, idx, allSubsets);
  }

  vector<vector<int>> subsetsWithDup(vector<int> &nums)
  {
    sort(nums.begin(), nums.end()); 
    vector<vector<int>> allSubsets;
    vector<int> ans;
    getAllSubsets(nums, ans, 0, allSubsets);
    return allSubsets;
  }
};


int main()
{
  Solution sol;
  vector<int> nums = {1, 2, 2}; 
  vector<vector<int>> result = sol.subsetsWithDup(nums);

  cout << "Total Subsets: " << result.size() << endl;
  for (auto &subset : result)
  {
    cout << "[ ";
    for (int val : subset)
      cout << val << " ";
    cout << "]" << endl;
  }
  return 0;
}
