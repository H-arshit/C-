#include<iostream>
using namespace std;
class pract
{
  int a,b,c;
public:
  void input();
  void output();
  void operator-();
};
void pract::input()
{
  cin>>a;
  cin>>b;
  cin>>c;
}
void pract::output()
{
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
}
void pract::operator-()
{
  a=-a;
  b=-b;
  c=-c;
}
  int main()
  {
  pract adi;
  adi.input();
  adi.output();
  -adi;
  adi.output();
    return 0;
  }
