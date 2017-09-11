/*Write a program to print all the LEADERS in the array. An element is leader if
it is greater than all the elements to its right side.
And the rightmost element is always a leader.
For example int the array
{16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2. */
#include<iostream>
using namespace std;
void fill(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
}
void printleaders(int arr[],int size)
{ int max=-32767;
  for(int i=size-1;i>=0;i--)
  {
    if(max<arr[i])
    {
      cout<<arr[i]<<endl;
      max=arr[i];
    }
  }
}
int main()
{
  int size;
  cout<<"enter the size of the list"<<endl;
  cin>>size;
  int arr[size];
  cout<<"fill the array"<<endl;
  fill(arr,size);
  cout<<"leaders are"<<endl;
  printleaders(arr,size);
  return 0;
}
