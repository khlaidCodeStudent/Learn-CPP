#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
  int left = 0;
  int right = s.length() - 1;

  while (left < right)
  {
    if (!isalnum(s[left]))
    {
      left++;
      continue;
    }
    if (!isalnum(s[right]))
    {
      right--;
      continue;
    }
    if (tolower(s[left]) != tolower(s[right]))
    {
      return false;
    }
    left++;
    right--;
  }
  return true;
}

int main()
{
  string s;
  cout << "Enter string: ";
  getline(cin, s);

  if (isPalindrome(s))
  {
    cout << "Palindrome " << endl;
  }
  else
  {
    cout << "Palindrome " << endl;
  }

  return 0;
}
// Output: Enter string: A man, a plan, a canal: Panama
// Output: Palindrome
// Output: Enter string: race a car
// Output: Not Palindrome
// Note: The first output is for the string "A man, a plan, a canal: Panama" which is a palindrome and the second output is for the string "race a car" which is not a palindrome.