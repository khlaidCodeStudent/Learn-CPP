#include <iostream>
using namespace std;
int factorial(int n) // Recursive function
{
  if (n == 0) // Base case
  {

    return 1;
  }
  return n * factorial(n - 1); // Recursive case
}
int main()
{
  cout << "Factorial of given number is: " << factorial(5);
  return 0;
}
// output: [ Factorial of given number is: 120 ]