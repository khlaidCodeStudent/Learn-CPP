// By Two Pointer Approach
#include <iostream>
using namespace std;
void reversearray(int array[], int size)
{
  int start = 0;      // shows the starting Index
  int end = size - 1; // shows the ending index
  while (start < end)
  {
    swap(array[start], array[end]); // the values are swaping here
    start++;
    end--;
  }
}
int main()
{
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(array) / sizeof(int);
  reversearray(array, size); // function is being called here

  for (int i = 0; i < size; i++)
  {
    cout << array[i] << "  ";
  }
}