#include<iostream>
using namespace std;
int main()
{
  int b[8],a,max=0,sta,end;
  for(int i=0;i<8;i++)
  {
    cin>>b[i];
  }
  for(int i=0;i<8;i++)
{
  for(int j=0;j<8-i;j++)
  {
    a=0;
    for(int k=i;k<8-j;k++)
    {
      a+=b[k];
    }
    if(max<a)
    {
      max=a;
      sta=i;
      end=8-j;

    }
  }
}
cout<<"largest sum ="<<max<<endl;
for(int i=sta;i<end;i++)
cout<<b[i]<<" ";
return 0;
}
