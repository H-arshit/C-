/*Given an integer array,
you need to find the two elements such that their sum is closest to zero.*/
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
{

}
int main()
{
  cout<<"enter the size"<<endl;
  int size;
  cin>>size;
  int *arr;
  arr=new int[size];
  fill(arr,size);
  find(arr,size);
  return 0;
}
