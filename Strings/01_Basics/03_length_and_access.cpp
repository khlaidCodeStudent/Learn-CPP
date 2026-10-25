#include <iostream>
using namespace std;
int main()
{
  string str;
  cout << "Enter you name : ";
  getline(cin, str);
  cout << "\n--- Analysis ---" << endl;
  cout << "Your string is: " << str << endl;
  cout << "Length using  length() : " << str.length() << endl;
  cout << "Length using size() : " << str.size() << endl;
  cout << "First char: " << str.front() << endl;
  cout << "Last char: " << str.back() << endl;
  cout << "Char at Index 0 : " << str[0] << endl;
  cout << "Char at index 1 using at() : " << str.at(1) << endl;
  cout << "\nTraversing String" << endl;
  for (int i = 0; i < str.length(); i++)
  {
    cout << str[i] << " ";
  }
  str[0] = 'X';
  cout << "\nAfter changing first char to X : " << str << endl;
  return 0;
}