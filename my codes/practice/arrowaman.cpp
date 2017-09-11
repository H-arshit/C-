#include<iostream>
using namespace std;

int main()
{
int i,j,n,k;
cin>>n;
    for(i=0;i<n;i++)
    {
      //cout<<" "<<i;
      for(k=0;k<i;k++)
      cout<<" ";
      for(j=0;j<i;j++)
      {

        cout<<"*";
        if(j==i-1)
        cout<<"\n";
      }
    }


    for(;i>0;i--)
    {
      //cout<<" "<<i;
      for(k=0;k<i;k++)
      cout<<" ";
      for(j=0;j<i;j++)
      {

        cout<<"*";
        if(j==i-1)
        cout<<"\n";
      }
    }
    //getch();
    return 0;
}
