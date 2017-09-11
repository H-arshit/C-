// while traversing if 1 comes trun right and return index of leaving element
#include<iostream>
using namespace std;
int main()
{
  cout<<"enter the number of rows"<<endl;
  int n;
  cin>>n;
  cout<<"enter the number of columns"<<endl;
  int m;
  cin>>m;
  int a[n][m];
  int i=0,j=0;
  cout<<"fill the array"<<endl;
  for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  cin>>a[i][j];
  //j=row
  //i=column
  j=0;
  i=-1;
  while(1)
  {
    for(i++;i<m;i++)
    {
      if(a[j][i]==1)
      {
        break;
      }
    }
    if(i==m)
    {
      cout<<j<<" "<<i-1;
      return 0;
    }
    for(j++;j<n;j++)
    {
      if(a[j][i]==1)
      {
        break;
      }
    }
    if(j==n)
    {
      cout<<j-1<<" "<<i;
      return 0;
    }
    for(i--;i>=0;i--)
    {
      if(a[j][i]==1)
      {
        break;
      }
    }
    if(i==-1)
    {
      cout<<j<<" "<<i+1;
      return 0;
    }
    for(j--;j>=0;j--)
    {
      if(a[j][i]==1)
      {
        break;
      }
    }
    if(j==-1)
    {
      cout<<j+1<<" "<<i;
      return 0;
    }

  }
}
