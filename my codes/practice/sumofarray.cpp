#include<iostream>
using namespace std;
void sum(int a[],int size)
{
  int sum=0;
  for(int i=0;i<size;i++)
  {
    sum+=a[i];
  }
  cout<<sum<<endl;
}
int main()
{
  cout<<"enter the number of elements"<<endl;
  int i,a[100];
  cin>>i;
  for(int j=0;j<i;j++)
  {
    cin>>a[j];
  }
  sum(a,i);
  return 0;
}
