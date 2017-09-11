#include <iostream>
using namespace std;
int main()
{
  int n,m,i,j,k;
  cout<<"enter the number of rows"<<endl;
  cin>>n;
  cout<<"enter the number of columns"<<endl;
  cin>>m;
  int a[n][m];
  cout<<"fill the array"<<endl;
  for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  cin>>a[i][j];
  cout<<"spiral print form is "<<endl;

          for(i=0,j=0;i<((n+1)/2);i++,j++)
          {
              for( ;j<m-i;j++)  //horizontal right increasing
              cout<<a[i][j]<<" ";

              for(j--,k=i+1;k<n-i;k++)  //vertical down increasing
              cout<<a[k][j]<<" ";

              for(k--,j--;j>=i;j--)   //horizontal left decreasing
              cout<<a[k][j]<<" ";

              for(j++,k--;k>i;k--) //vertical up decraesing
              {cout<<a[k][j]<<" ";}

            }
            return 0;
}
