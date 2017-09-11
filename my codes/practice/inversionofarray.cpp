/*Inversion Count for an array indicates – how far (or close) the array is from being sorted.
If array is already sorted then inversion count is 0. If array is sorted in reverse order
that inversion count is the maximum.
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).*/
#include<iostream>
using namespace std;
void fill(int *arr,int size)
{
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
}
void inversion(int *arr,int size)
{
  int count=0;
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if(arr[i]>arr[j])
      {
        count++;
      }
    }
  }
  cout<<count<<endl;
}
int main()
{
  int size;
  cout<<"enter size"<<endl;
  cin>>size;
  int *a;
  a=new int[size];
  fill(a,size);
  inversion(a,size);
    return 0;
}
