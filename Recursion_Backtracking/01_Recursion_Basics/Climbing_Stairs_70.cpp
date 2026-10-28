#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int climbStairs(int n)
  {
    if (n <= 2)
      return n;

    int first = 1;  
    int second = 2;
    int current = 0;

    for (int i = 3; i <= n; i++)
    {
      current = first + second; 
      first = second;
      second = current;
    }
    return second;
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