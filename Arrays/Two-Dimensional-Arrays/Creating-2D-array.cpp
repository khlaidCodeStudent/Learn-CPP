#include <iostream>
using namespace std;
int main()
{
  int twodarr[3][4] = {
    {1, 2, 3, 4}, // Horizantal Line show the first Row of 2D array 
    {5, 6, 7, 8}, // Vertical Line shows the Coloum of 2D array
    {9,10,11,12}
  };
  int row = 3;
  int col = 4;
  for (int i = 0; i < row; i++)//Outer loop for row
  {

    for (int j = 0; j < col; j++) // Inner loop for coloums
    {
      cout << twodarr[i][j] << ' ';
    }
    cout << endl;  // To break the line after each loop is completed for one row
  }
  
  return 0;
}
// Outpute: 
// 1 2 3 4
// 5 6 7 8 
// 9 10 11 12