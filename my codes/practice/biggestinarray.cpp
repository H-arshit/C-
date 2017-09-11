#include<iostream>
using namespace std;
void lar(int a[],int size)
{
  int max=a[0];
  for(int i=0;i<size;i++)
  if(max<a[i])
  max=a[i];
  cout<<"largest is "<<max;
}
int main()
{
  int a[10];
  for(int i=0;i<10;i++)
  cin>>a[i];
  lar(a,10);
  return 0;

}
