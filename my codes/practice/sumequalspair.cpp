#include<iostream>
using namespace std;
int main()
{
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  int x,k;
  cout<<"enter the number"<<endl;
  cin>>x;
  for(int i=0;i!=9;i++)
  { k=i+1;
    while((i+k)!=10)
    {
      if((a[i]+a[i+k])==x)
      {
        cout<<"numbers are "<<a[i]<<" "<<a[i+k];
        return 0;
      }
      else
      {
        k++;
      }
    }
  }
  cout<<"no such pair exists"<<endl;
  return 0;
}
