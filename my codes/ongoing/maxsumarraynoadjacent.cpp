/*Given an array of positive numbers, find the maximum sum of a subsequence
with the constraint that
no 2 numbers in the sequence should be adjacent in the array.
So 3 2 7 10 should return 13 (sum of 3 and 10) or
3 2 5 10 7 should return 15 (sum of 3, 5 and 7).*/
#include<iostream>
using namespace std;
void fill(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
}
void sum(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    for()
  }
}
int main()
{
int size;
cout<<"'enter the size of list"<<endl;
cin>>size;
int arr[size]={0};
cout<<"fill the array"<<endl;
fill(arr,size);
  return 0;
}
