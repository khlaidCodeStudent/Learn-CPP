#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
  vector<vector<string>> ans;
  vector<string> current;
  bool isPalindrome(string &s, int start, int end)
  {
    while (start < end)
    {
      if (s[start] != s[end])
        return false;
      start++;
      end--;
    }
    return true;
  }

  void backtrack(string &s, int index)
  {
    
    if (index == s.size())
    {
      ans.push_back(current);
      return;
    }

    for (int i = index; i < s.size(); i++)
    {
     
      if (isPalindrome(s, index, i))
      {
     
        current.push_back(s.substr(index, i - index + 1));
       
        backtrack(s, i + 1);
       
        current.pop_back();
      }
    }
  }

  vector<vector<string>> partition(string s)
  {
    backtrack(s, 0);
    return ans;
  }
};

int main()
{
  Solution sol;
  string s = "aab";
  
  vector<vector<string>> result = sol.partition(s);

  for (auto &v : result)
  {
    cout << "[ ";
    for (auto &str : v)
    {
      cout << str << " ";
    }
    cout << "]" << endl;
  }
  return 0;
}

// Output:
// [ a a b ]
// [ aa b ]

// Time Complexity: O(N * 2^N), where N is the length of the input string. The number of possible partitions is 2^(N-1), and for each partition, we may need to check if each substring is a palindrome, which takes O(N) time in the worst case.

// Space Complexity: O(N), where N is the length of the input string. The space used by the recursion stack can go up to O(N) in the worst case, and we also use additional space to store the current partition and the final result.

// How Code Works:
// 1. The `partition` function initializes the backtracking process by calling the `back track` function starting from index 0.
// 2. The `backtrack` function explores all possible partitions of the string by iterating through the string and checking if the substring from the current index to the current position is a palindrome using the `isPalindrome` function.
// 3. If a palindrome is found, it is added to the current partition, and the function recursively calls itself to continue partitioning the remaining substring.
// 4. When the end of the string is reached, the current partition is added to the final result. The function then backtracks by removing the last added substring and continues exploring other possibilities.
// 5. The `isPalindrome` function checks if a given substring is a palindrome by comparing characters from the start and end of the substring, moving towards the center. If any characters do not match, it returns false; otherwise, it returns true.
// 6. The main function demonstrates how to use the `Solution` class to partition a given string and print the resulting partitions.
// 7. The output shows all possible palindrome partitions of the input string "aab".