#include <iostream>
using namespace std;
int main()
{
  // Accessing array elements through indix
  int arr[4] = {1, 2, 3, 4};
  cout << "1st Element of arr : " << arr[0] << endl;
  cout << "2nd Element of arr : " << arr[1] << endl;
  cout << "3rd Element of arr : " << arr[2] << endl;
  cout << "4th Element of arr : " << arr[3] << endl;
  // In the above code of line [0] [1] [2] [3] show the index where the element are stored

  // Accessing array elements using loop
  int arr1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int size = sizeof(arr1) / sizeof(int);
  cout << " Accessing All the Elements Through Loop" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr1[i] << " ";
  };
  cout << endl;
  // Writing at an index in an Array
  cout << "Writing at an index in an Array" << endl;
  int A[5];
  A[0] = 12;
  A[1] = 20;
  cout << "Number at index 0 : " << A[0] << endl;
  cout << "Number at index 1 : " << A[1] << endl;
  cout << "Enter number at index 2 : ";
  cin >> A[2];
  cout << "Enter number at index 3 : ";
  cin >> A[3];
  cout << "Enter number at index 4 : ";
  cin >> A[4];

  return 0;
}