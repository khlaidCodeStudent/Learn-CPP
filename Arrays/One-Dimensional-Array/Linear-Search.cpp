#include <iostream>
using namespace std;
int main()
{
  int arr[] = {2, 4, 44, 1, 5, 40, 99, 100};
  int size = sizeof(arr) / sizeof(int);
  int target = 999;
  bool found = false;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      cout << "Your target Value : " << arr[i] << endl;
      cout << "your target value is at " << i << " index" << endl;
      found = true;
      break;
    }
  }

  if (found == false)
  {
    cout << "Value not exist in Array !";
  }

  return 0;
}
// Information: This code snippet demonstrates a linear search algorithm in C++. We have an integer array `arr` and a target value `target` that we want to find in the array. We iterate through each element of the array using a for loop, checking if the current element matches the target value. If a match is found, we print the value and its index, set the `found` flag to true, and break out of the loop. If the loop completes without finding the target, we print a message indicating that the value does not exist in the array.