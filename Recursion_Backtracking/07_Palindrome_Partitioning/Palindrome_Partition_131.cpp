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

