#include<iostream>
using namespace std;
int main()
{
  int a[9],j=0;
  for(int k=0;k<9;k++)
  cin>>a[k];
  for(int i=1;i<11;i++)
  {
    for (j=0;j<9;j++)
    {
      if(a[j]==i)
      break;

    }
if(j==9)
{
  cout<<"missing no. is "<<i;
  return 0;
}
  }
  return 0;
}
