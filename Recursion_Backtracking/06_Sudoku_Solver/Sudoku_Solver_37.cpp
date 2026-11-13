#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  void solveSudoku(vector<vector<char>> &board)
  {
    solve(board);
  }

private:
  bool solve(vector<vector<char>> &board)
  {
    for (int row = 0; row < 9; row++)
    {
      for (int col = 0; col < 9; col++)
      {
        if (board[row][col] == '.')
        {
          for (char num = '1'; num <= '9'; num++)
          {
            if (isValid(board, row, col, num))
            {
              board[row][col] = num;
              if (solve(board))
                return true;
              board[row][col] = '.'; // backtrack
            }
          }
          return false;
        }
      }
    }
    return true;
  }

  bool isValid(vector<vector<char>> &board, int row, int col, char num)
  {
    for (int i = 0; i < 9; i++)
    {
      if (board[row][i] == num)
        return false;
      if (board[i][col] == num)
        return false;
      int boxRow = 3 * (row / 3) + i / 3;
      int boxCol = 3 * (col / 3) + i % 3;
      if (board[boxRow][boxCol] == num)
        return false;
    }
    return true;
  }
};

int main()
{
  vector<vector<char>> board = {
      {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
      {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
      {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
      {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
      {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
      {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
      {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
      {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
      {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

  Solution sol;
  sol.solveSudoku(board);

  cout << "Solved Sudoku:\n";
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      cout << board[i][j] << " ";
      if ((j + 1) % 3 == 0)
        cout << " ";
    }
    cout << endl;
    if ((i + 1) % 3 == 0)
      cout << endl;
  }
  return 0;
}