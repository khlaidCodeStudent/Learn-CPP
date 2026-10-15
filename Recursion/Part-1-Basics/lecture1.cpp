#include<iostream>
using namespace std;
void printNum(int n){  // Recursive function 
  if(n==1){
    cout<<"1\n";
    return;
  }
  cout<<n<<' ';
  printNum(n-1);
}
int main()
{
  printNum(4);
  return 0;
}
// output: [ 4 3 2 1 ]