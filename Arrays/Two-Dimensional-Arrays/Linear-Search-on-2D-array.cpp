#include <iostream>
using namespace std;

bool searchTarget(int arr[][4], int row, int col, int target)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] == target)
      {
        cout << "Target found at (" << i << ", " << j << ")" << endl;
        return true;
      }
    }
  }
  cout << "Target not found!" << endl;
  return false;
}

int main()
{
  int arr[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}};

  int row = 3;
  int col = 4;
  int target = 10;

  // Function call
  searchTarget(arr, row, col, target);

  return 0;
}
// Output:
// Target found at (2, 1)

//Information: The above code implements a linear search algorithm on a 2D array. It defines a function `searchTarget` that takes a 2D array, its dimensions (row and column), and a target value to search for. The function iterates through each element of the array using nested loops and checks if the current element matches the target. If found, it prints the position of the target and returns true; otherwise, it prints that the target was not found and returns false. The main function initializes a 2D array, specifies the target value, and calls the search function.
