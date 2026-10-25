#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str1, str2;
  cout << "Enter a single word: ";
  cin >> str1;
  cout << "You entered: " << str1 << endl; 

  cin.ignore(); // To ignore the newline character left in the input buffer
  cout << "Enter full sentence: ";
  getline(cin, str2);
  cout << "Full sentence is: " << str2 << endl;

  return 0;
}
