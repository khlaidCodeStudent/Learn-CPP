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
// Information:
// The provided C++ code defines a class `Solution` that contains methods to generate all possible subsets of a given vector of integers. The `getAllSubsets` method uses recursion and backtracking to explore all combinations of including or excluding each element in the input vector. The `subsets` method initializes the process and returns the final collection of subsets. The `main` function demonstrates how to use the `Solution` class to generate and print all subsets of the vector `{1, 2, 3}`.
// How to use:
// 1. Create an instance of the `Solution` class.
// 2. Call the `subsets` method with a vector of integers as an argument.
// 3. The method will return a vector of vectors containing all possible subsets.
// 4. Iterate through the result to print each subset in a formatted manner.
// How code works:
// - The `getAllSubsets` function is a recursive function that takes the current index `i`, the current subset being built `ans`, and the collection of all subsets `AllSubsets`.
// - If the index `i` reaches the size of the input vector, it means a complete subset has been formed, and it is added to `AllSubsets`.
// - The function explores two paths: including the current element in the subset and excluding it. After exploring the inclusion path, it backtracks by removing the last added element before exploring the exclusion path.
// - This process continues until all combinations have been explored, resulting in all possible subsets being generated.