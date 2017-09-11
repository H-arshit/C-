#include <iostream>
using namespace std;
int main()
{
  int n,m,i,j;
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
    /*  k - starting row index
        n - ending row index
        l - starting column index
        m - ending column index
        i - iterator
    */
    int l=0,k=0;
    while(l<m && k<n)
    {
      for(i=l;i<m;i++)  //for printing upper rows
      {
        cout<<a[k][i]<<" ";
      }
      k++;  //upper row once printed will not be printed again
      for(i=k;i<n;i++) //for printing right columns
      {
        cout<<a[i][m-1]<<" ";
      }
      m--;  //right columns once printed will not be printed again
      for(i=m-1;i>=l;i--)//for print bottom rows
      {
        cout<<a[n-1][i]<<" ";
      }
      n--;
      for(i=n-1;i>=k;i--)
      {
        cout<<a[i][l]<<" ";
      }
      l++;
    }
}
