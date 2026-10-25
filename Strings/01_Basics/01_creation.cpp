#include <iostream>
#include <string>
using namespace std;

int main()
{
  // 1. Different ways to create a string
  string s1 = "Hello";
  string s2("World");
  string s3(5, 'A'); // AAAAA
  char chArr[] = "Khalid";

  cout<< "s1: " << s1 << endl;
  cout << "s2: " << s2 << endl;
  cout << "s3: " << s3 << endl;
  cout << "char array: " << chArr << endl;

  // 2. Accessing character
  cout << "First char of s1: " << s1[0] << endl;
  s1[0] = 'J';
  cout << "After change: " << s1 << endl; // Jello

  // 3. Length
  cout << "Length of s1: " << s1.length() << endl;

  return 0;
}
// Output:
// s1: Hello
// s2: World
// s3: AAAAA
// char array: Khalid
// First char of s1: H
// After change: Jello
// Length of s1: 5
// Note: In C++20, you can also use the std::string::starts_with and std::string::ends_with methods to check if a string starts or ends with a specific substring.