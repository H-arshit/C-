#include<iostream>
using namespace std;
int main()
{
  int a[10],i=0;
  int initial=0,fnl=9,p;
  for(i=0;i<10;i++)
  {
    cin>>a[i];
  }

  while(initial<=fnl)
  {
    p=a[initial];
    a[initial]=a[fnl];
    a[fnl]=p;
    initial++;
    fnl--;
  }
  cout<<"reversed array "<<endl;
  for(i=0;i<10;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
