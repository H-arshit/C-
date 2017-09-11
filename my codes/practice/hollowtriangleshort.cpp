#include<iostream>
using namespace std;
int main()
{
  int i,j,n,k=1;
cin>>n;
  if(n%2==0)
  k=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<((2*n)-1);j++)
    {
      if(i!=n)
      {if(j==((n/2)-i+k+1)||j==((n/2)+i+k+1))
      cout<<"*";
      else
      cout<<" ";
}
     else
     {
       cout<<"*";
     }
    }

    cout<<endl;
  }
}
