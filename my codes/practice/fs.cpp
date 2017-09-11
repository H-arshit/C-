#include<iostream>
using namespace std;
struct hs
{int x;
hs *y;};
int main()
{
  hs *al;
  al=new hs;
  al->x=10;
  cout<<(al->x);
  al->y=NULL;


}
