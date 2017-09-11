#include<iostream>
using namespace std;
void sort(int **a,int size)
{ int b;
    for(int i=0;i<size-1;i++)
    for(int j=size-1;j>i;j--)
    {
      if(a[1][j]>a[1][j-1])
      {
        b=a[0][j];
        a[0][j]=a[0][j-1];
        a[0][j-1]=b;
        b=a[1][j];
        a[1][j]=a[1][j-1];
        a[1][j-1]=b;
      }
    }
}
void fill(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
}
void countfrequency(int arr[],int size)
{ int **x,j=0,k=0;
  x=new int *[2];
  for(int i=0;i<2;i++)
  x[i]=new int [size];
  for(int i=0;i<size;i++)
  {
    for(k=0;k<j;k++)
    {
        if(x[0][k]==arr[i])
        {
          (x[1][k])++;
          break;
        }
    }
    if(k==j)
    {
      x[0][k]=arr[i];
      x[1][k]=1;
      j++;
    }
  }

  sort(x,j);
  for(int i=0;i<j;i++)
  {
    cout<<x[0][i]<<" "<<x[1][i]<<endl;
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
  countfrequency(arr,size);
    return 0;
}
