#include<iostream>
using namespace std;
int sum(int n){
  if(n==0){
    return 0;
  }
  return n + sum(n-1);
}
int main()
{
  cout << "sum = " << sum(5);
  return 0;
}

// output: [ sum = 15 ]

         // Information about the program:
                
// This program calculates the sum of first N natural numbers using recursion.

// The base case is when n is 0, in which case the function returns 0.

// The recursive case adds n to the sum of the first (n-1) natural numbers by calling the sum function with (n-1).

// TimeComplexity: O(n) - The function makes n recursive calls, where n is the input number. Each call performs a constant amount of work (addition and function call), leading to a linear time complexity.

// SpaceComplexity: O(n) - The space complexity is also O(n) due to the call stack created by the recursive function calls. Each recursive call adds a new layer to the call stack until the base case is reached, resulting in a maximum depth of n.