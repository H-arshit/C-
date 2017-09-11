#include<iostream>
using namespace std;
void sort(int a[],int size)
{ int small,index;
  for(int i=0;i<size;i++)
  {
    small=a[i],index=i;
    for(int j=i;j<size;j++)
  {
    if(small>a[j])
    {
    small=a[j];
    index=j;
    }
  }
  a[index]=a[i];
  a[i]=small;
  }
}


int main()
{
  int *a,b;
  cout<<"enter the size of array"<<endl;
  cin>>b;
  cout<<"fill the array"<<endl;
  for(int i=0;i<b;i++)
  {
    cin>>a[i];
  }
  sort(a,b);
  cout<<"sorted array is "<<endl;
  for(int i=0;i<b;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
