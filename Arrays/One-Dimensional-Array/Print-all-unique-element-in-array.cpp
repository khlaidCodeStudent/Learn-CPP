#include <iostream>
using namespace std;

void printUnique(int arr[], int size)
{
  cout << "Unique values in array: ";
  for (int i = 0; i < size; i++)
  {
    bool isDuplicate = false;

    // check if arr[i] appeared before
    for (int j = 0; j < i; j++)
    {
      if (arr[i] == arr[j])
      {
        isDuplicate = true;
        break;
      }
    }

    // if not duplicate, print it
    if (!isDuplicate)
    {
      cout << arr[i] << " ";
    }
  }
  cout << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 2, 4, 1, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  printUnique(arr, size);

  return 0;
}
//Information about the code: This C++ program defines a function `printUnique` that takes an array and its size as input and prints all unique elements in the array. The main function initializes an array with some duplicate values, calculates its size, and calls the `printUnique` function to display the unique elements.

// How the code works: The `printUnique` function iterates through each element of the array and checks if it has appeared before by comparing it with all previous elements. If an element is found to be unique (not a duplicate), it is printed to the console. The main function demonstrates this functionality by providing an example array with duplicates.