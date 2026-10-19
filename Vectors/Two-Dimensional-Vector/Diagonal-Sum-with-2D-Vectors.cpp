#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>> &mat)
{
  int n = mat.size();
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += mat[i][i]; // primary diagonal
    if (i != n - i - 1)
    {
      sum += mat[i][n - i - 1]; // secondary diagonal
    }
  }
  return sum;
}

int main()
{
  vector<vector<int>> matrix = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};

  cout << diagonalSum(matrix) << endl; // Output: 25
  return 0;
}
// Output:
// 25
// About Code: The code defines a function `diagonalSum` that calculates the sum of the primary and secondary diagonals of a square matrix represented as a 2D vector. It takes a reference to a 2D vector (matrix) as a parameter. The function iterates through each row, adding the elements from both diagonals to the sum. The condition `if (i != n - i - 1)` ensures that the center element in an odd-sized matrix is not counted twice. The main function initializes a 3x3 matrix and calls the `diagonalSum` function, printing the result.
