/*sort an array containing only 0 and 1 using a single scan*/
#include<iostream>
using namespace std;
void sort(int *arr,int size)
{
  for(int i=-1,j=size-1;i!=j;)
  {
    if(arr[i+1]==0)
    {
      i++;
    }
    else
    {
      arr[i+1]=arr[j];
      arr[j]=1;
      j--;
    }
  }
}
void display(int *arr,int size)
{
  cout<<"the array is "<<endl;
  for(int i=0;i<size;i++)
  cout<<arr[i]<<" ";
  cout<<endl;
}
void fill(int *arr,int size)
{
  cout<<"fill the binary array"<<endl;
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
}
int main()
{
  cout<<"enter the size of array"<<endl;
  int size;
  cin>>size;
  int *arr=new int [size];
  fill(arr,size);
  display(arr,size);
  sort(arr,size);
  display(arr,size);
}
