#include<iostream>
using namespace std;
int main()
{
  int arr[]={1,2,3,4};  // here 4 shows the size of Array name arr and the data { } are the members of Array name arr also int show the data type of that data which is to be store in arr
  int n=4;
  for(int i=0;i<n;i++){  // loop used for to print all members of array 
    cout << arr[i] << " ";
  
  }
   cout<<endl;

   cout<<" This is Float data type Array"<<endl;
  float Array[] = {12.10, 23.34, 32.23, 2.2, 3.5};
  int size = 5;
  for (int i = 0; i < size; i++)
  {
    
    cout << Array[i] << " ";
  }

  return 0;
}