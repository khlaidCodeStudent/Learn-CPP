#include <iostream>
using namespace std;
int fib(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}
int main()
{
  int n=4;
  cout<< "Fibonacci of given number is: " << fib(n);
  return 0;
}
// output: [ Fibonacci of given number is: 3 ]
// Information about the program:
// This program calculates the nth Fibonacci number using recursion.
// The base case is when n is 0 or 1, in which case the function returns n.
// The recursive case calculates the nth Fibonacci number by summing the (n-1)th and (n-2)th Fibonacci numbers by calling the fib function with (n-1) and (n-2).
// TimeComplexity: O(2^n) - The function makes two recursive calls for each value of n greater than 1, leading to an exponential time complexity. The number of calls grows rapidly as n increases, resulting in a time complexity of O(2^n).
// SpaceComplexity: O(n) - The space complexity is O(n) due to the call stack created by the recursive function calls. Each recursive call adds a new layer to the call stack until the base case is reached, resulting in a maximum depth of n.