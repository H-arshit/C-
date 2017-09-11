#include<iostream>
using namespace std;
int main()
{
  int i,j,k,n;
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
    cout<<" ";
    for(k=0;k<=i;k++)
    cout<<"*";
    cout<<endl;
  }
  for(i=n-1;i>0;i--)
  {
    for(j=0;j<(i-1);j++)
    cout<<" ";
    for(k=0;k<i;k++)
    cout<<"*";
    cout<<endl;
  }
}
