#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  // For Character String
  char str[] = {'h', 'e', 'l', 'l', 'o'};
  int n = 5;
  int st = 0;
  int end = n - 1;
  while (st <= end)
  {
    swap(str[st], str[end]);
    st++;
    end--;
  }
  for (int i = 0; str[i] != '\0'; i++)
  {
    cout << str[i];
  }
  return 0;

  // Now for C++ Strings

  string name = "Khalid khan";
  reverse(name.begin(), name.end());
  cout << name << endl;
  return 0;
}
// Output: olleh 
// Output: nahk dihlK
// Note: The first output is for the character string and the second output is for the C++ string.