#include<ios tream>
using namespace std;
int main()
{
int i,j,k,n,x;
cin>>n;
for(i=0;i<n;i++)
{
  for(j=0;j<=i;j++)
  cout<<"@";
  for(k=i;k<(n-1);k++)
    cout<<" ";
  for(k=i;k<(n-2);k++)
  cout<<" ";
  for((n-1==i)?x=1:x=0;x<=(i);x++)
  cout<<"@";
  cout<<endl;
}
return 0;
}
