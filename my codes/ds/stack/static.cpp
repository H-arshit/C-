#include<iostream>
using namespace std;
class stack
{
private:
  int a[10],top;
public:
  stack()
  {
    top=-1;
  }
  void push(int);
  void pop();
  void topelement();
  void isempty();
  void trav();
};

void stack::push(int data)
{
  if(top!=9)
  {
    a[++top]=data;
  }
    else
    {
    cout<<"overflow"<<endl;
    }
}
void stack::pop()
{
  if(top!=-1)
  {
  cout<<"deleted element "<<a[top]<<endl;
  top--;
  }
  else
  cout<<"underflow"<<endl;
}
void stack::topelement()
{
  if(top!=-1)
  cout<<"Element on top "<<a[top]<<endl;
}
void stack::isempty()
{
  if(top!=-1)
  cout<<"false"<<endl;
  else
  cout<<"true"<<endl;
}
void stack::trav()
{ int x=top;
  cout<<"stack :"<<endl;
  while(x!=-1)
  {
    cout<<a[x--]<<endl;
  }
}

  int main()
  {
    stack *s;
    s=new stack;
    int x;
    while (1)
     {
      cout<<"1-push 2-pop 3-top element 4-stack check 5-traverse 6-exit"<<endl;
      cin>>x;
      switch(x)
      {
        case 1:
        {
        cout<<"enter data"<<endl;
        cin>>x;
        s->push(x);
        break;
        case 2:
        s->pop();
        break;
        case 3:
        s->topelement();
        break;
        case 5:
        s->trav();
        break;
        case 4:
        s->isempty();
        break;
        case 6:
        return 1;

      }
     }
  }
}
