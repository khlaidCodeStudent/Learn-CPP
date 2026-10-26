#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkInclusion(string s1, string s2)
{
  if (s1.length() > s2.length())
    return false;
  vector<int> c1(26, 0), win(26, 0);
  for (int i = 0; i < s1.length(); i++)
  {
    c1[s1[i] - 'a']++;
    win[s2[i] - 'a']++;
  }
  if (c1 == win)
    return true;
  for (int i = s1.length(); i < s2.length(); i++)
  {
    win[s2[i] - 'a']++;
    win[s2[i - s1.length()] - 'a']--;
    if (c1 == win)
      return true;
  }
  return false;
}

int main()
{
  cout << checkInclusion("ab", "eidbaooo") << endl; // 1 = true
  cout << checkInclusion("ab", "eidboaoo") << endl; // 0 = false
  return 0;
}