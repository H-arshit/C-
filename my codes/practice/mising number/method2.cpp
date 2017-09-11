#include<iostream>
using namespace std;
int main()
{
  int a[9], sum=55;
  for(int i=0;i<9;i++)
  {
    cin>>a[i];
    sum=sum-a[i];
  }
  cout<<"number not present is "<<sum<<endl;
}
