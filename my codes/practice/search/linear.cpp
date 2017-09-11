#include<iostream>
using namespace std;
int main()
{ int a[10];
  for(int i=0;i<10;i++)
  {
    cin>>a[i];
  }
  cout<<"enter the element u want to search"<<endl;
  int x;
  cin>>x;
  for(int i=0;i<10;i++)
  {
    if(a[i]==x)
    {
      cout<<"the number is present at "<<i+1<<" th location"<<endl;
      return 0;
    }
  }
  cout<<"element not present"<<endl;
  return 0;
}
