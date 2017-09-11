#include<iostream>
using namespace std;
int main()
{
  int a[10],b[10][2]={0},i,j,x;
  for(i=0;i<10;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<10;i++)
  {
    for(j=0,x=0;b[j][0]!=0;j++)
    {
      if(b[j][0]==a[i])
      {
        ++b[j][1];
        x=1;
      }
    }
    if(x==0)
    {
      b[j][0]=a[i];
      ++b[j][1];
    }
  }
  for(i=0;b[i][0]!=0;i++)
  {
    cout<<b[i][0]<<" no of occurance "<<b[i][1]<<endl;
  }
return 0;
}
