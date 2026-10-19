#include <iostream>
using namespace std;
int diagonalSum(int matrix[][4], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += matrix[i][i];
    if (i != n - i - 1)
    {
      sum += matrix[i][n - i - 1];
    }
  }
  return sum;
}

int main()
{
  int matrix[4][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16}};
  int n = 4;

  cout << diagonalSum(matrix, n) << endl;
  return 0;
}
// Output:
// 68

// About Code: The code defines a function `diagonalSum` that calculates the sum of the primary and secondary diagonals of a square matrix. It takes a 2D array (matrix) and its size (n) as parameters. The function iterates through each row, adding the elements from both diagonals to the sum. The condition `if (i != n - i - 1)` ensures that the center element in an odd-sized matrix is not counted twice. The main function initializes a 4x4 matrix and calls the `diagonalSum` function, printing the result.
