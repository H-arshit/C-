#include<iostream>
using namespace std;
struct node
{
  int x;
  node *link;
};
class stack
{
  node *top;
public:
  stack()
  {
    top=NULL;
  }
  void push();
  void pop();
  void traverse();
};
void stack::push()
{
  node *temp;
  temp=new node;
  temp->link=top;
  cin>>(temp->x);
  top=temp;
}
void stack::pop()
{
  node *temp;
  cout<<"value deleted"<<(top->x)<<endl;
  temp=top->link;
  delete top;
  top=temp;
}
void stack::traverse()
{
  node *temp=top;
  while(temp!=NULL)
  {
    cout<<temp->x<<endl;
    temp=temp->link;
  }
}
int main()
{
  stack s;
  
}
