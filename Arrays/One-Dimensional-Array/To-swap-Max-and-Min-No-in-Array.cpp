#include <iostream>
#include <climits>
#include <algorithm> // for swap
using namespace std;

int main()
{
  int arr[] = {2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);

  int minIndex = 0, maxIndex = 0;
  int smallest = INT_MAX, largest = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
      minIndex = i;
    }
    if (arr[i] > largest)
    {
      largest = arr[i];
      maxIndex = i;
    }
  }
  swap(arr[minIndex], arr[maxIndex]);

  cout << "Array after swapping: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
