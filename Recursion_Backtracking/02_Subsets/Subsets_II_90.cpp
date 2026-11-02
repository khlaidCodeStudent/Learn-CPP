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

    // 3. DUPLICATE SKIP LOGIC: Ye is problem ki jaan hai
    // Agar nums[i] = 2 hai aur aage bhi 2 hai, to usko skip karna hai
    // taake [1,2] do baar na bane
    int idx = i + 1;
    while (idx < nums.size() && nums[idx] == nums[idx - 1])
    {
      idx++; // same value ko chalang maar ke aage jao
    }

    // 4. EXCLUDE CASE: nums[i] ko nahi lena, aur duplicate skip karke aage jana
    getAllSubsets(nums, ans, idx, allSubsets);
  }

  vector<vector<int>> subsetsWithDup(vector<int> &nums)
  {
    sort(nums.begin(), nums.end()); // duplicate ko paas paas lane ke liye sort lazmi hai
    vector<vector<int>> allSubsets;
    vector<int> ans;
    getAllSubsets(nums, ans, 0, allSubsets);
    return allSubsets;
  }
};

// Local run ke liye main function
int main()
{
  Solution sol;
  vector<int> nums = {1, 2, 2}; // aap yahan array change kar sakte ho
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