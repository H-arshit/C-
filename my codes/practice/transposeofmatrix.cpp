#include<iostream>
using namespace std;
int main()
{
  int row,col;
  cout<<"enter the number of rows"<<endl;
  cin>>row;
  cout<<"enter the number of columns"<<endl;
  cin>>col;
  int a[row][col], trns[col][row];
  for(int i=0;i<row;i++)
  for(int k=0;k<col;k++)
  cin>>a[i][k];
  cout<<"transpose is "<<endl;
  for(int i=0;i<row;i++)
  {for(int k=0;k<col;k++)
  {trns[k][i]=a[i][k];
  }
  }
  for(int i=0;i<col;i++)
  {for(int k=0;k<row;k++)
  cout<<trns[i][k]<<" ";
  cout<<endl;}

  return 0;
}
