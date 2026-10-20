#include <iostream>
#include <vector>
using namespace std;
int BinarySearch(vector<int> arr, int tar)
{
  int str = 0;
  int end = arr.size() - 1;
  while (str <= end)
  {
    int mid = (str + end) / 2;
    if (tar > arr[mid])
    {
      str = mid + 1;
    }
    else if (tar < arr[mid])
    {
      end = mid - 1;
    }
    else
    {
      return mid;
    }
  }
  return -1;
}
int main()
{
  vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
  int tar1 = 12;
  cout << BinarySearch(arr, tar1) << endl;
}

// Information:
// Output: 6
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Note: The array must be sorted for binary search to work correctly.
// The function returns the index of the target element if found, otherwise it returns -1.
// The function takes a vector of integers and a target integer as input.
