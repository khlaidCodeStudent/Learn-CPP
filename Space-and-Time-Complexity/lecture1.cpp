#include <iostream>
using namespace std;

// Example: Sum of array elements
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i]; // O(1) operation repeated n times
  }
  cout << "Sum of array = " << sum << endl;

  return 0;
}
