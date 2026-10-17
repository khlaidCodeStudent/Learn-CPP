#include<iostream>
using namespace std;
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  cout << "Size of arr : " << sizeof(arr) << endl;
  cout << "Size of int : " << sizeof(int) << endl;
  cout << "Number of elements in arr : " << sizeof(arr) / sizeof(int) << endl;
   
  return 0;
}

// Information: The sizeof operator in C++ is used to determine the size, in bytes, of a data type or object. In this code snippet, we are using sizeof to find the size of an integer array and the size of an integer data type. We then calculate the number of elements in the array by dividing the total size of the array by the size of a single integer.