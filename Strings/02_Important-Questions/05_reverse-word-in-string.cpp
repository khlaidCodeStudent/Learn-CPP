#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string reversewords(string s)
{
  reverse(s.begin(), s.end());
  int n = s.length();
  string ans = " ";
  for (int i = 0; i < n; i++)
  {
    string word = " ";
    while (i < n && s[i] != ' ')
    {
      word += s[i];
      i++;
    }
    reverse(word.begin(), word.end());
    if (word.length() > 0)
    {
      ans += " " + word;
    }
  }
  if (ans.length() > 0)
    ans = ans.substr(1);
  return ans;
}
int main()
{
  string s = "the sky is blue";
  cout << "Input: " << s << endl;
  cout << "Output: " << reversewords(s) << endl;
  return 0;
}
// Output: Input: the sky is blue
// Output: Output: blue is sky the
// How this code works: The function reversewords takes a string s as input and reverses the order of the words in the string. It first reverses the entire string, then iterates through the characters of the string to extract each word, reverses each word, and appends it to the result string ans. Finally, it returns the reversed words in the correct order.
// Time Complexity: O(n), where n is the length of the input string s. The function performs a single pass through the string to reverse it and another pass to extract and reverse each word, resulting in a linear time complexity.
// Space Complexity: O(n), where n is the length of the input string s. The function uses additional space to store the reversed words in the result string ans, which can be up to the same length as the input string.
