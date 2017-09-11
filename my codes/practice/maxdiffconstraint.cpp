/*Given an array C[] of integers, find out the maximum difference between
 any two elements such that larger element appears after the smaller number
in C[].
Examples: If array is [2, 3, 10, 6, 4, 8, 1]
then returned value should be 8 (Diff between 10 and 2).
If array is [ 7, 9, 5, 6, 3, 2 ]
then returned value should be 2 (Diff between 7 and 9).
*/
#include<iostream>
using namespace std;
void fill(int *arr,int size)
{
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
}
void find(int *arr,int size)
{ int min=-35536;
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if(arr[i]<arr[j] && (arr[j]-arr[i])>min)
      {
        min=arr[j]-arr[i];
      }
    }
  }
  cout<<"the max difference is "<<min;
}
int main()
{
  int n;
  cout<<"enter the size"<<endl;
  cin>>n;
  cout<<"fill the elements"<<endl;
  int *arr=new int[n];
  fill(arr,n);
  find(arr,n);

}
