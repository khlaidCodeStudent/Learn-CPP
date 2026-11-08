#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans)
{
  int n = mat.size();
  if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || mat[r][c] == -1)
  {
    return;
  }
  if (r == n - 1 && c == n - 1)
  {
    ans.push_back(path);
    return;
  }
  mat[r][c] = -1;                         // mark as visited
  helper(mat, r + 1, c, path + "D", ans); // down
  helper(mat, r, c - 1, path + "L", ans); // left
  helper(mat, r, c + 1, path + "R", ans); // right
  helper(mat, r - 1, c, path + "U", ans); // up
  mat[r][c] = 1;                          // mark as unvisited (backtrack)
}

vector<string> findPath(vector<vector<int>> &mat)
{
  int n = mat.size();
  vector<string> ans;
  string path = "";
  helper(mat, 0, 0, path, ans);
  return ans;
}

int main()
{
  vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

  vector<string> ans = findPath(mat);
  for (string path : ans)
  {
    cout << path << endl;
  }

  return 0;
}
// Output:
// DDRDRR
// DRDDRR

// Time Complexity: O(4^(n^2)) - In the worst case, we can explore all 4 directions from each cell, leading to an exponential number of paths.

// Space Complexity: O(n^2) - The space used by the recursion stack can go up to n^2 in the worst case, where n is the size of the maze. Additionally, we are storing all valid paths in the ans vector, which can also take up to O(n^2) space in the worst case.

// How Code Works:
// 1. The function findPath initializes the process by calling the helper function starting from the top-left corner of the maze (0, 0).
// 2. The helper function checks if the current position is valid (within bounds and not blocked or already visited). If it reaches the bottom-right corner, it adds the current path to the ans vector.
// 3. The function then marks the current cell as visited by setting it to -1 and recursively explores all four possible directions (down, left, right, up).
// 4. After exploring all directions, it backtracks by marking the cell as unvisited (setting it back to 1) to allow for other paths to use this cell in future recursive calls.  
// 5. Finally, the main function prints all the valid paths found from the top-left to the bottom-right corner of the maze.