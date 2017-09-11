#include<iostream>
using namespace std;
int main()
{
  int i,j,k,l,m,n;
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=n;j>i;j--)
    cout<<"*";
    for(k=0;k<i;k++)
    cout<<" ";
    for(l=0;l<(i-1);l++)
    cout<<" ";
    for((i==0)?m=(n-1):m=n;m>i;m--)
    cout<<"*";
    cout<<endl;

  }
  return 0;
}
