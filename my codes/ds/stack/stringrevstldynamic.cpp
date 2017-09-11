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
  void push(char*);
  void pop(char*);
  };
  void stack::push(char *a)
  {
  node *temp;
  for(int i=0;a[i]!='\0';i++)
  {
  temp=new node;
  temp->next=top;
  temp->x=a[i];
  top=temp;
  }
  }

  void stack::pop(char *a)
  {

    node *temp=top;
      for(int i=0;top!=NULL;i++)
      {
      a[i]=temp->x;
      temp=top->next;
      delete top;
      top=temp;
      }
  }
int main()
{
  stack *s;
  s=new stack;
  char a[100];
  gets(a);
  s->push(a);
  s->pop(a);
  puts(a);
  return 0;
}
