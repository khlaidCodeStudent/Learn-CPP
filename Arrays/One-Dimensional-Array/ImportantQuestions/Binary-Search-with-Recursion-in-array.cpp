#include <iostream>
#include <vector> 
using namespace std;

int recBinarySearch(vector<int> arr, int tar, int st, int end)
{
  if (st <= end)
  {
    int mid = st + (end - st) / 2;

    if (tar > arr[mid])
    { // 2nd half
      return recBinarySearch(arr, tar, mid + 1, end);
    }
    else if (tar < arr[mid])
    { // 1st half
      return recBinarySearch(arr, tar, st, mid - 1);
    }
    else
    { // mid => ans
      return mid;
    }
  }

  return -1;
}

int main()
{
  vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // even
  int tar2 = 10;

  cout << recBinarySearch(arr2, tar2, 0, arr2.size() - 1) << endl;

  return 0;
}
// Information:
// Output: -1
// Time Complexity: O(log n)
// Space Complexity: O(log n) due to recursion stack 
// Note: The array must be sorted for binary search to work correctly.
// The function returns the index of the target element if found, otherwise it returns -1.
// The function takes a vector of integers, a target integer, and the start and end indices as input.