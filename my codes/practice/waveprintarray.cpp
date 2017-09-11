#include<iostream>
using namespace std;
int main()
{
int a[4][4],i,j;
for(i=0;i<4;i++)
for(j=0;j<4;j++)
cin>>a[i][j];
cout<<"wave print"<<endl;
for(j=0;j<4;j++)
for((j%2)?i=3:i=0;i!=((j%2)?-1:4);(j%2)?--i:++i)
cout<<a[i][j]<<" ";
return 0;
}
