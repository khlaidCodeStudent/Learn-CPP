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
// Output:
// Total Subsets: 6
// [ 1 2 2 ]
// [ 1 2 ]
// [ 1 ]
// [ 2 2 ]
// [ 2 ]
// [ ]

// Note: The output may vary in order, but the total number of unique subsets will be 6.
// HOW TO HANDLE DUPLICATES:
// 1. Sort the input array to bring duplicates together.
// 2. In the recursive function, after the include case, skip over duplicates in the exclude case by moving the index forward until a different element is found.
// How Code Works:
// 1. The function getAllSubsets is called recursively to explore all possible subsets.
// 2. For each element, we have two choices: include it in the subset or exclude it.
// 3. To handle duplicates, we sort the array first and then skip over duplicate elements in the exclude case.
// 4. The base case is when the index reaches the end of the array, at which point we add the current subset to the list of all subsets.
// 5. The main function demonstrates how to use the Solution class to generate and print all unique subsets of the vector {1, 2, 2}.
// 6. The output shows the total number of unique subsets and lists each subset in a formatted manner.