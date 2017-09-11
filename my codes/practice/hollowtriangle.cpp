#include<iostream>
using namespace std;
int main()
{
  int i,j,n;
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=n-i;j>1;j--)
    cout<<" ";
    cout<<"*";
    for(j=0;i!=(n-1)&&j<((2*i)-1);j++)
    cout<<" ";
    if(i!=0)
    cout<<"*";
    if((n-1)==i)
    {
      for(j=0;j<((2*n)-3);j++)
      cout<<"*";
    }
    cout<<endl;
  }
}
