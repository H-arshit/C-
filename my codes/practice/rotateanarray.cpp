#include <iostream>
using namespace std;
int main()
{
  int ar[10],i=0,d,p;

  for(i=0;i<10;i++)
  {
    cin>>ar[i];
  }
  i=0;
  cout<<"enter rotating element"<<endl;
  cin>>d;
  while(ar[i]!=d)
  {
    i++;
  }
  for(int j=0;j<=i;j++)
  {
    for(int k=0;k<9;k++)
    {
      p=ar[k];
      ar[k]=ar[k+1];
      ar[k+1]=p;
    }
  }
cout<<"rotated array"<<endl;
for(i=0;i<10;i++)
{
  cout<<ar[i]<<" ";
}
return 0;
}
