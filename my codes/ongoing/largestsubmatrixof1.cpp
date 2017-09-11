/*Given a binary matrix, find out the maximum size square sub-matrix with all 1s*/
#include<iostream>
using namespace std;
void fill(int **arr,int size)
{
  for(int i=0;i<size;i++)
  {
    for(int j=0;j<size;j++)
    cin>>arr[i][j];
  }
}
void find(int **arr,int size)
{
  int hcount=0,vcount=0;
  for(int i=0;i<size;i++)
  {
    for(int j=0;j<size;j++)
    {
      if(arr[i][j]==1)
      {
        hcount++;
        for(int k=i;k<size;k++)
        {

        }
      }
      else
      {
        break;
      }
    }
    for(int k=i;k<size;k++)
    {

    }
  }
}
int main()
{
  int size;
  cout<<"enter size"<<endl;
  cin>>size;
  int **arr=new int *[size];
  for(int i=0;i<size;i++)
  {
    arr[i]=new int [size];
  }
  cout<<"fill the array with  binary "<<endl;
  fill(arr,size);
  find(arr,size);
}
