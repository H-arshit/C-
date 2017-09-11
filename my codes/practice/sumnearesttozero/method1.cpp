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
{ int mini=-35536,min=35566,a,b;
  for(int i=0;i<size;i++)
  {
    for(int k=i+1;k<size;k++)
    {
      if(((arr[i]+arr[k])>=0 && (arr[i]+arr[k])<min))
      {
        a=arr[i];
        b=arr[k];
        min=a+b;
      }
      else if((arr[i]+arr[k])<=0 && (arr[i]+arr[k])>mini)
      {
        a=arr[i];
        b=arr[k];
        mini=a+b;
      }
    }
  }
  cout<<"the numbers are "<<a<<" "<<b<<endl;
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
