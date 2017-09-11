#include<iostream>
using namespace std;
int main()
{
  int a[20],b[6];
  for(int i=0;i<14;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<6;i++)
  {
    cin>>b[i];
  }
  cout<<"merged array "<<endl;
  for(int i=0;i<6;i++)
  {
    for(int j=0;j<20;j++)
    {
      if(b[i]<a[j])
      {
        for(int k=14+i;k>j;k--)
        {
          a[k]=a[k-1];

        }
        a[j]=b[i];
        break;
      }
    }
  }
  for(int i=0;i<20;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
