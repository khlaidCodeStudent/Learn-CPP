#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<vector<int>> vec2D = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};
  cout << "Traversing the elements of 2D vector: " << endl;
  for (int i = 0; i < vec2D.size(); i++)
  {
    for (int j = 0; j < vec2D[i].size(); j++)
    {
      cout << vec2D[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
// Output:
// Traversing the elements of 2D vector:
// 1 2 3
// 4 5 6
// 7 8 9