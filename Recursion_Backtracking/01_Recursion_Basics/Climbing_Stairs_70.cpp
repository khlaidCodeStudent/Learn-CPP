#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int climbStairs(int n)
  {
    if (n <= 2)
      return n; // base case
    return climbStairs(n - 1) + climbStairs(n - 2);
  }
};


int main()
{
  Solution s;
  int n = 5;
  cout << "Ways to climb " << n << " stairs: " << s.climbStairs(n) << endl;
  // Output: 8
  return 0;
}