#include<iostream>
using namespace std;
int main()
{
  int arr1[]={2,3,4,5,6};
  int arr2[]={3,5,4,2,9};
  int sizea1=sizeof(arr1)/sizeof(int);
  int sizea2 = sizeof(arr2) / sizeof(int);
  for(int i=0;i<sizea1;i++)
  {
    for(int j=0;j<sizea2;j++)
    {
      if(arr1[i]==arr2[j])
      {
        cout<<arr1[i]<<" ";
      }
    }
  }
  cout<<endl;
}
// Information: This code snippet is a C++ program that finds the intersection of two one-dimensional arrays. It initializes two arrays, `arr1` and `arr2`, and calculates their sizes. The program then uses nested loops to compare each element of `arr1` with each element of `arr2`. If a match is found, it prints the matching element to the console. Finally, it outputs a newline character after printing all intersecting elements.