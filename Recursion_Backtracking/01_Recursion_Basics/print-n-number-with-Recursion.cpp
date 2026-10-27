#include<iostream>
using namespace std;
void printNum(int n){
  if(n==1){
      cout<<"1\n";
      return ;
  }
  cout<<n<<" ";
  printNum(n-1);
}
int main()
{
  printNum(5);
  return 0;
}

// Output: 5 4 3 2 1
// Explanation: The function printNum takes an integer n as input and prints the numbers from n down to 1 using recursion. The base case is when n equals 1, at which point it prints "1" and returns. For any other value of n, it prints the current value of n followed by a space, and then calls itself with n-1. This continues until the base case is reached.

// What is Recursion? Recursion is a programming technique where a function calls itself in order to solve a problem. It typically involves a base case to terminate the recursive calls and a recursive case that breaks the problem down into smaller subproblems. In this example, the function printNum uses recursion to print numbers from n down to 1.

// Important Points about Recursion:

// 1. Base Case: Every recursive function must have a base case to prevent infinite recursion. In this example, the base case is when n equals 1.
// 2. Recursive Case: The recursive case is where the function calls itself with a modified argument.
// 3. Stack Overflow: If the base case is not defined or reached, it can lead to a stack overflow error due to excessive recursive calls.
// 4. Memory Usage: Recursive functions can use more memory than iterative solutions because each function call adds a new layer to the call stack.
// 5. Readability: Recursion can make code more readable and easier to understand for problems that have a natural recursive structure, such as tree traversals or combinatorial problems.