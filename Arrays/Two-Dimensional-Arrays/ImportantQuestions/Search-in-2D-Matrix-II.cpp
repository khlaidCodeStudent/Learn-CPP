#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &mat, int target)
  {
    int m = mat.size();
    int n = mat[0].size();
    int r = 0, c = n - 1;

    while (r < m && c >= 0)
    {
      if (target == mat[r][c])
      {
        return true;
      }
      else if (target < mat[r][c])
      {
        c--;
      }
      else
      {
        r++;
      }
    }
    return false;
  }
};

int main()
{
  vector<vector<int>> matrix = {
      {1, 4, 7, 11, 15},
      {2, 5, 8, 12, 19},
      {3, 6, 9, 16, 22},
      {10, 13, 14, 17, 24},
      {18, 21, 23, 26, 30}};

  Solution sol;
  int target = 5; 

  if (sol.searchMatrix(matrix, target))
  {
    cout << "Target found!" << endl;
  }
  else
  {
    cout << "Target not found!" << endl;
  }

  return 0;
}
// Output: Target found!
// Time Complexity: O(m + n) where m is the number of rows and n is the number of columns
// Space Complexity: O(1)
// Information: The function searchMatrix takes a 2D matrix and a target integer as input and returns true if the target is found in the matrix, otherwise it returns false. The matrix is assumed to be sorted in ascending order both row-wise and column-wise. The function uses a two-pointer approach to efficiently locate the target within the matrix.
