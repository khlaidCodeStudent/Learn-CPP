#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat,int r,int c,string path,vector<string> &ans)
{
}

vector<string> findPath(vector<vector<int>> &mat)
{
  vector<string> ans;
  string path="";
 helper(mat,0,0,path,ans);
 return ans;
};

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