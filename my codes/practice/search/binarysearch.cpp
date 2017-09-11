#include<iostream>
using namespace std;
int main()
{
  int a[10]={23,25,38,40,109,123,345,5456,5666,9560};
  int x;
  cin>>x;
  int mid,front=0,end=9;
  while(1)
  {
    mid=(front+end)/2;
    if(a[mid]==x)
    {
      cout<<"element present at "<<mid+1;
      return 0;
    }
    else if(a[mid]>x)
    {
      end=mid-1;
    }
    else if(a[mid]<x)
    {
      front=mid+1;
    }
    else if(front==end)
    {
      cout<<"element not present"<<endl;
      return 0;
    }
  }

}
