#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool isSafe(vector<string> &board, int row, int col, int n)
  {
    for (int j = 0; j < n; j++)
    {
      if (board[row][j] == 'Q')
      {
        return false;
      }
    }
    for (int i = 0; i < row; i++)
    {
      if (board[i][col] == 'Q')
      {
        return false;
      }
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
      if (board[i][j] == 'Q')
      {
        return false;
      }
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
      if (board[i][j] == 'Q')
      {
        return false;
      }
    }
    return true;
  }

  void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans)
  {
    if (row == n)
    {
      ans.push_back(board);
      return;
    }
    for (int j = 0; j < n; j++)
    {
      if (isSafe(board, row, j, n))
      {
        board[row][j] = 'Q';
        nQueens(board, row + 1, n, ans);
        board[row][j] = '.';
      }
    }
  }

  vector<vector<string>> solveNQueens(int n)
  {
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    nQueens(board, 0, n, ans);
    return ans;
  }
};

int main()
{
  Solution s;
  int n;
  cout << "Enter n: ";
  cin >> n;
  vector<vector<string>> res = s.solveNQueens(n);
  for (auto &sol : res)
  {
    for (auto &row : sol)
      cout << row << "\n";
    cout << "\n";
  }
  return 0;
}
// Output: 
// Enter n: 4
// ..Q.
// Q...
// ...Q
// .Q..
// .Q..
// ...Q
// Q...
// ..Q.

// Time Complexity: O(N! * N) where N is the size of the chessboard. The N! factor comes from the fact that we are trying to place queens in N rows, and for each row, we have N choices for placing a queen. The additional O(N) factor comes from the isSafe function, which checks if a queen can be placed in a particular position.

// Space Complexity: O(N^2) for the board and O(N) for the recursion stack, resulting in a total space complexity of O(N^2 + N) = O(N^2).

// Note: The above time and space complexity analysis is a rough estimate and may vary based on the specific implementation and optimizations used. 

// How code works: The code uses backtracking to solve the N-Queens problem. It starts with an empty chessboard and tries to place queens row by row. For each row, it checks all columns to see if placing a queen is safe (i.e., it does not conflict with any previously placed queens). If it finds a safe position, it places the queen and recursively attempts to place queens in the next row. If it reaches a point where no safe position is available, it backtracks by removing the last placed queen and trying the next column. This process continues until all queens are placed on the board, at which point the current configuration is added to the list of solutions.