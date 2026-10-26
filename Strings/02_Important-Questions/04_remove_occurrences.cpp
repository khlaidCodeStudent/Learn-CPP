#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string s, string part)
{
  while (s.length() > 0 && s.find(part) < s.length())
  {
    s.erase(s.find(part), part.length());
  }
  return s;
}

int main()
{
  string s, part;

  cout << "Enter main string: ";
  getline(cin, s);

  cout << "Enter part to remove: ";
  getline(cin, part);

  string ans = removeOccurrences(s, part);

  cout << "Result: " << ans << endl;

  return 0;
}

// Output: Enter main string: daabcbaabcbc
// Output: Enter part to remove: abc
// Output: Result: dab
// Note: The first output is for the main string "daabcbaabcbc" and the second output is for the part to remove "abc". The final result after removing all occurrences of "abc" from the main string is "dab".