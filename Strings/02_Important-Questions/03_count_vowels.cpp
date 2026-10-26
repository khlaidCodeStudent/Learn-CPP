#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  cout << "Enter string: ";
  getline(cin, str);

  int vowels = 0;
  int consonants = 0;

  for (int i = 0; i < str.length(); i++)
  {
    char ch = tolower(str[i]);

    // check karo kya ye alphabet hai
    if (ch >= 'a' && ch <= 'z')
    {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      {
        vowels++;
      }
      else
      {
        consonants++;
      }
    }
  }

  cout << "Vowels: " << vowels << endl;
  cout << "Consonants: " << consonants << endl;
  cout << "Total length: " << str.length() << endl;

  return 0;
}
// Output: Enter string: Hello World
// Output: Vowels: 3
// Output: Consonants: 7
// Output: Total length: 10
// Note: The first output is for the string "Hello World" which has 3 vowels, 7 consonants and total length of 10.
