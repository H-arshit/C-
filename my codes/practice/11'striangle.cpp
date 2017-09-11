#include<iostream>
using namespace std;
int main()
{
  long k=1;
  int n;

  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      cout<<" ";
    }
    cout<<(k*k)<<endl;
    k=(k*10)+1;
  }
  return 0;
}
