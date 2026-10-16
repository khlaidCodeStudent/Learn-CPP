#include <iostream>
using namespace std;
int main()
{
  int marks[] = {50, 40, 20, 80, 90, 34};
  int size = sizeof(marks) / sizeof(int);
  int smallest = INT_MAX;
  int largest = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (marks[i] < smallest)
      smallest = marks[i];
    if (marks[i] > largest)
      largest = marks[i];
  }

  cout << "Smallest number is: " << smallest << endl;
  cout << "Largest number is: " << largest << endl;
}