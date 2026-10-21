#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  bool SearchinRow(vector<vector<int>> &mat, int tar, int midrow)
  {
    int n = mat[0].size();
    int str = 0, end = n - 1;
    while (str <= end)
    {
      int mid = str + (end - str) / 2;
      if (tar > mat[midrow][mid])
      {
        str = mid + 1;
      }
      else if (tar < mat[midrow][mid])
      {
        end = mid - 1;
      }
      else
      {
        return true;
      }
    }
    return false;
  }

  bool searchMatrix(vector<vector<int>> &mat, int tar)
  {
    int m = mat.size();
    int n = mat[0].size();
    int strow = 0, endrow = m - 1;

    while (strow <= endrow)
    {
      int midrow = strow + (endrow - strow) / 2;

      if (tar >= mat[midrow][0] && tar <= mat[midrow][n - 1])
      {
        return SearchinRow(mat, tar, midrow);
      }
      else if (tar > mat[midrow][n - 1])
      {
        // down direction
        strow = midrow + 1;
      }
      else
      {
        // upward direction
        endrow = midrow - 1;
      }
    }
    return false;
  }
};

int main()
{
  vector<vector<int>> matrix = {
      {1, 3, 5, 7},
      {10, 11, 16, 20},
      {23, 30, 34, 60}};

  int target = 34;

  Solution obj;
  if (obj.searchMatrix(matrix, target))
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
// Time Complexity: O(log(m * n)) where m is the number of rows and n is the number of columns
// Space Complexity: O(1)

// Information: The function searchMatrix takes a 2D matrix and a target integer as input and returns true if the target is found in the matrix, otherwise it returns false. The matrix is assumed to be sorted in ascending order both row-wise and column-wise. The function uses binary search to efficiently locate the target within the matrix.