#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int tar, int st, int end)
{
  if (st > end)
    return -1; 

  int mid = st + (end - st) / 2; 

  if (arr[mid] == tar)
    return mid;

  if (arr[mid] < tar)
  {
    return binarySearch(arr, tar, mid + 1, end);
  }

  else
  {
    return binarySearch(arr, tar, st, mid - 1);
  }
}

int main()
{
  vector<int> arr = {1, 3, 5, 7, 9, 11};
  int tar = 7;
  int ans = binarySearch(arr, tar, 0, arr.size() - 1);
  cout << "Index: " << ans << endl;
  return 0;
}
