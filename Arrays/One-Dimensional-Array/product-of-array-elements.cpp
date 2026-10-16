#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int product = 1; // start with 1
  for (int i = 0; i < size; i++)
  {
    product *= arr[i]; // multiply each element
  }

  cout << "Product of array elements = " << product << endl;
  return 0;
}
// output: Product of array elements = 6