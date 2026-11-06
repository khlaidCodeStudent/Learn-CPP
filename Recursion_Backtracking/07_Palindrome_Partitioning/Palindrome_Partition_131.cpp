#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
  vector<vector<string>> ans;
  vector<string> current;

  // Check karo ke string palindrome hai ya nahi
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
    // Base case: agar poori string khatam ho gayi
    if (index == s.size())
    {
      ans.push_back(current);
      return;
    }

    // Har possible cut try karo
    for (int i = index; i < s.size(); i++)
    {
      // Agar index se i tak ka part palindrome hai
      if (isPalindrome(s, index, i))
      {
        // Us part ko le lo
        current.push_back(s.substr(index, i - index + 1));
        // Agay ke liye recursion
        backtrack(s, i + 1);
        // Wapis a kar hatado (Backtracking)
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