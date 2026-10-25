#include <iostream>
using namespace std;
int main()
{
  // Concatenation
  // string str1 = "Muhammad";
  // string str2 = "Khalid";
  // string str3 = "khan";
  // string finalstr = str1 + " " + str2 + " " + str3;
  // cout << "Final String After Concatenation : " << finalstr << endl;
  

  // Iterating Over a String
  string s = "CPP";
  for (int i = 0; i < s.length(); i++)
  {
    cout << s[i] << " ";
  }

  // Using for-each loop (Modern C++)
  for (char c : s)
  {
    cout << c << " ";
  }

  //  Comparison
  string s1 = "apple";
  string s2 = "banana";

  if (s1 == s2)
    cout << "Equal";
  else
    cout << "Not Equal";

  // s1 < s2 based on lexicographical (dictionary) order
  if (s1 < s2)
    cout << " s1 is smaller";
}