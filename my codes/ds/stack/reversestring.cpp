#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class stack
{
private:
  char b[10],top;
public:
  stack()
  {
    top=-1;
  }
  void push(char*);
  void pop(char*);
};
void stack::push(char a[])
{ int i=0;
  while(a[i]!='\0')
  {b[++top]=a[i++];
  }
}
void stack::pop(char a[])
{int i=0;
while(top!=-1)
{a[i++]=b[top--];
}
}
int main()
{
  cout<<"enter string"<<endl;
  char a[50];
gets(a);
  stack *s;
  s=new stack;

  s->push(a);
  s->pop(a);
puts(a);
  return 0;
}
