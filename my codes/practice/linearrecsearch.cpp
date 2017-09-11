#include<iostream>
using namespace std;
int srch(int a[],int size,int x)
{
  static int i=0;
  if(i==size)
  return -1;
  else if(a[i++]==x)
  {
    return i;
  }
  srch(a,size,x);
}
int main()
{
  int a[10]={1,2,3,4,5,6,7,8,9,0};
  cout<<"enter the element to be searched"<<endl;
  int x;
  cin>>x;
  cout<<"pos. of element"<<srch(a,10,x);
  return 0;
}
