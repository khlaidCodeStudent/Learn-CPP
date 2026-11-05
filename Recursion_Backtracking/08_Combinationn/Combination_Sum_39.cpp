#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  set<vector<int>> s;
  void getAllCombinations(vector<int> &arr, int idx, int tar, vector<vector<int>> &ans, vector<int> &combin)
  {
    if (idx == arr.size() || tar < 0)
    {
      return;
    }
    if (tar == 0)
    {
      if (s.find(combin) == s.end())
      {
        ans.push_back(combin);
        s.insert(combin);
      }
      return;
    }

    combin.push_back(arr[idx]);
    // single choose
    getAllCombinations(arr, idx + 1, tar - arr[idx], ans, combin);
    // multiple
    getAllCombinations(arr, idx, tar - arr[idx], ans, combin);
    combin.pop_back();
    // exclusion
    getAllCombinations(arr, idx + 1, tar, ans, combin);
  }

  vector<vector<int>> combinationSum(vector<int> &arr, int target)
  {
    vector<vector<int>> ans;
    vector<int> combin;
    getAllCombinations(arr, 0, target, ans, combin);
    return ans;
  }
};

int main()
{
  Solution sol;

  vector<int> arr = {2, 3, 6, 7};
  int target = 7;

  vector<vector<int>> ans = sol.combinationSum(arr, target);

  cout << "Answer:\n";
  for (auto &v : ans)
  {
    cout << "[ ";
    for (int x : v)
    {
      cout << x << " ";
    }
    cout << "]\n";
  }

  return 0;
}
// Output:
// Answer: 
// [ 2 2 3 ]
// [ 7 ]

// Time Complexity: O(2^n) where n is the number of elements in the input vector arr. The recursive function explores all possible combinations of elements, leading to an exponential number of combinations in the worst case.

// Space Complexity: O(n) for the recursion stack, where n is the number of elements in the input vector arr. The space used by the answer vector and the set is not counted towards the space complexity since they are part of the output.

// How Code Works: The code uses a recursive backtracking approach to generate all unique combinations of elements from the input vector arr that sum up to the target value. The getAllCombinations function takes the current index idx, the remaining target tar, and a temporary combination vector combin. It explores three possibilities: including the current element (single choose), including it multiple times (multiple), and excluding it (exclusion). When the remaining target becomes zero, it checks if the combination is unique using a set and adds it to the answer vector ans. The main function demonstrates how to use the Solution class to find and print all unique combinations that sum up to the target value.