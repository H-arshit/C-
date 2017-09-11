#include<iostream>
using namespace std;
void fill(int *arr,int size)
{
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
}
void sort(int *a,int size,int k)
{ int b;
    for(int i=0;i<k;i++)
    for(int j=0;j<size-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        b=a[j];
        a[j]=a[j+1];
        a[j+1]=b;
      }
    }
}
int main()
 {
  int size;
  cout<<"enter size"<<endl;
  cin>>size;
  int *arr=new int[size];
  cout<<"no of ele"<<endl;
  int k;
  cin>>k;
  fill(arr,size);
  sort(arr,size,k);
  for(int i=0;i<k;i++)
  {
    cout<<arr[size-i-1]<<endl;
  }
  return 0;
}
