#include <iostream>
#include <climits>
using namespace std;
int maxcolsum(int arr[][3], int row, int col)
{
  int maxColsum = INT_MIN;
  for (int i = 0; i < col; i++)
  {
    int sum = 0;
    for (int j = 0; j < row; j++)
    {
      sum += arr[j][i];
    }
    maxColsum = max(maxColsum, sum);
  }
  return maxColsum;
}
int main()
{
  int arr[3][3] = {
      {1, 2, 3},
      {5, 6, 7},
      {9, 10, 11}};
  int row = 3;
  int col = 3;
  cout << "The maximum column sum is: " << maxcolsum(arr, row, col);
  return 0;
}