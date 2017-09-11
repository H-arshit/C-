#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
  char x;
  node *next;
};
class stack
  {
  private:
    node *top;
  public:
  stack()
  {
    top=NULL;
  }
  void push(char);
  void pop();
  char topelement();
  node* topret();
  };

  node* stack::topret()
  {
    return top;
  }
  void stack::push(char a)
  {
  node *temp;
  temp=new node;
  temp->x=a;
  temp->next=top;
  top=temp;
  }

  void stack::pop()
  {
      node *temp=top;
      temp=top->next;
      delete top;
      top=temp;
  }
  char stack::topelement()
  {
    return top->x;
  }
int main()
{ stack s;
  char a[20];
  gets(a);
  int i=-1;
  while(a[++i]!='\0')
  {
  if(a[i]=='{'||a[i]=='['||a[i]=='(')
  {
    s.push(a[i]);
  }
  else
  {
    if((s.topelement()=='{'&& a[i]=='}')||(s.topelement()=='('&& a[i]==')')||(s.topelement()=='['&& a[i]==']'))
    s.pop();
    else
    {cout<<"unbalanced"<<endl;
    return 0;}
  }
  }
  if(s.topret()!=NULL)
  {
    cout<<"unbalanced"<<endl;
    return 0;
  }
  cout<<"balanced"<<endl;
  return 0;

}
