#include <iostream>
using namespace std;
void sort(int a[],int size)
{ int b;
    for(int i=0;i<size-1;i++)
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
  int *a,b;
  cout<<"enter the size of array"<<endl;
  cin>>b;
  cout<<"fill the array"<<endl;
  for(int i=0;i<b;i++)
  {
    cin>>a[i];
  }
  sort(a,b);
  int num=a[0],number=a[0],c=0,max=0;
  cout<<"sorted array is "<<endl;
  for(int i=0;i<b;i++)
  {
    if(num==a[i])
    {
      c++;
    }
    else
    {
      num=a[i];
      c=1;
    }
    if(max<c)
    {
      max=c;
      number=a[i];

    }
  }
  cout<<"max occiuring nember is "<<number<<" "<<max;
  return 0;
}
