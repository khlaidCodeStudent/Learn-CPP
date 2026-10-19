#include<iostream>
#include<climits>
using namespace std;
int maxrowsum(int arr[][3],int row,int col){
  int maxRowsum=INT_MIN;
  for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
      sum+=arr[i][j];
    }
    maxRowsum=max(maxRowsum,sum);
  }
  return maxRowsum;
}
int main()
{
  int arr[3][3] = {
      {1, 2, 3},
      {5, 6, 7},
      {9, 10, 11}
    };
  int row=3;
  int col=3;
  cout<< "The maximum row sum is: "<<maxrowsum(arr,row,col);
  return 0;
}
// Output:
// The maximum Row sum is: 30
//why?The output "The maximum row sum is: 30" is produced because the function `maxrowsum` calculates the sum of each row in the 2D array and keeps track of the maximum sum encountered.
