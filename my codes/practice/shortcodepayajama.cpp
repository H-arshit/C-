#include<iostream>
using namespace std;
int main()
{
  int i,j,k,n;
  cin>>n;
  k=2*n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<(k-1);j++)
    {
      if(j>=(n-i)&&j<=(k-n+i-2))
      cout<<" ";
      else
      cout<<"*";
    }
cout<<endl;
  }
}
