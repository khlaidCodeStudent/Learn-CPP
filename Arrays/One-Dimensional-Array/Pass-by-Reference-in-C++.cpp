#include<iostream>
using namespace std;
void changeArr(int arr[],int size){

  cout<<" In function\n";
  for(int i=0;i<size;i++){
    arr[i]=2*arr[i];
  }
}
int main()
{
  int arr[]={1,2,3};
  changeArr(arr,3);
  cout<<" In Main\n";
  for(int i=0;i<3;i++){
    cout<<arr[i]<<' ';
  }
  return 0;
}
// information: In this code snippet, we demonstrate the concept of pass-by-reference in C++. The function `changeArr` takes an integer array and its size as parameters. Inside the function, we modify the elements of the array by doubling their values. Since arrays are passed by reference in C++, the changes made to the array inside the function are reflected in the original array in the `main` function. After calling `changeArr`, we print the modified array elements in `main`, showing that they have been updated.