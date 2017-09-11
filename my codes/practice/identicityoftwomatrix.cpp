#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cout<<"enter the number of rows"<<endl;
  std::cin >> n;
  std::cout << "enter the number of columns" << '\n';
  std::cin >> m;
  int a[n][m],b[n][m];
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  std::cin >> a[i][j];
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  std::cin >> b[i][j];
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  {
    if(a[i][j]!=b[i][j])
    {
      cout<<"mismatch"<<endl;
      return 0;
    }
}
  cout<<"matched"<<endl;

  return 0;
}
