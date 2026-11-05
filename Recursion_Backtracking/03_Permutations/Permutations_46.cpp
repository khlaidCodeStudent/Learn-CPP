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
      swap(nums[idx], nums[i]); 
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
// Output:
// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1

// Time Complexity: O(n! * n) where n is the number of elements in the input vector nums. The n! factor comes from the number of permutations, and the additional n factor comes from the time taken to copy each permutation into the answer vector.

// Space Complexity: O(n) for the recursion stack, where n is the number of elements in the input vector nums. The space used by the answer vector is not counted towards the space complexity since it is part of the output.

// How Code Works: The code uses a recursive backtracking approach to generate all permutations of the input vector nums. The getperms function takes the current index idx and swaps elements to generate permutations. When idx reaches the size of nums, it means a complete permutation has been formed, and it is added to the answer vector ans. The main function demonstrates how to use the Solution class to generate and print all permutations of the input vector.