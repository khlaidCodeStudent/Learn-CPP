#include <iostream>
#include <vector>
using namespace std;

void printSpiral(vector<vector<int>> &mat, int m, int n)
{
  int srow = 0, erow = m - 1;
  int scol = 0, ecol = n - 1;

  while (srow <= erow && scol <= ecol)
  {
    // Top row
    for (int j = scol; j <= ecol; j++)
    {
      cout << mat[srow][j] << " ";
    }
    srow++;

    // Right column
    for (int i = srow; i <= erow; i++)
    {
      cout << mat[i][ecol] << " ";
    }
    ecol--;

    // Bottom row
    if (srow <= erow)
    {
      for (int j = ecol; j >= scol; j--)
      {
        cout << mat[erow][j] << " ";
      }
      erow--;
    }

    // Left column
    if (scol <= ecol)
    {
      for (int i = erow; i >= srow; i--)
      {
        cout << mat[i][scol] << " ";
      }
      scol++;
    }
  }
}

int main()
{
  vector<vector<int>> mat = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16}};

  printSpiral(mat, 4, 4);
  return 0;
}

// Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// Time Complexity: O(m * n) where m is the number of rows and n is the number of columns
// Space Complexity: O(1)
// Information: The function printSpiral takes a 2D matrix and its dimensions as input and prints the elements of the matrix in a spiral order. It uses four pointers to keep track of the current boundaries of the matrix and iteratively prints the elements in a clockwise direction until all elements are printed.