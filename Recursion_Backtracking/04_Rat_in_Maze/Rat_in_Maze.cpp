#include <iostream>
#include <vector>
using namespace std;

// complete this function
vector<string> findPath(vector<vector<int>> &mat)
{
  int n = mat.size();
  vector<string> ans;
  vector<vector<int>> vis(n, vector<int>(n, 0));
  string path = "";

  auto dfs = [&](auto &&self, int row, int col) -> void
  {
    if (row == n - 1 && col == n - 1)
    {
      ans.push_back(path);
      return;
    }
    vis[row][col] = 1;

    // D
    if (row + 1 < n && mat[row + 1][col] == 1 && !vis[row + 1][col])
    {
      path.push_back('D');
      self(self, row + 1, col);
      path.pop_back();
    }
    // L
    if (col - 1 >= 0 && mat[row][col - 1] == 1 && !vis[row][col - 1])
    {
      path.push_back('L');
      self(self, row, col - 1);
      path.pop_back();
    }
    // R
    if (col + 1 < n && mat[row][col + 1] == 1 && !vis[row][col + 1])
    {
      path.push_back('R');
      self(self, row, col + 1);
      path.pop_back();
    }
    // U
    if (row - 1 >= 0 && mat[row - 1][col] == 1 && !vis[row - 1][col])
    {
      path.push_back('U');
      self(self, row - 1, col);
      path.pop_back();
    }
    vis[row][col] = 0;
  };

  if (mat[0][0] == 1)
  {
    dfs(dfs, 0, 0);
  }
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