#include<iostream>
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
  void push();
  void pop();
  void topelement();
  void isempty();
  void trav();
  };
  void stack::push()
  {
  node *temp;
  temp=new node;
  cout<<"enter data"<<endl;
  cin>>(temp->x);
  temp->next=top;
  top=temp;
  }

  void stack::pop()
  {
    if(top==NULL)
    {
      cout<<"underflow"<<endl;
    }
    else
    {
      node *temp=top;
      cout<<"deleted content :"<<top->x<<endl;
      temp=top->next;
      delete top;
      top=temp;

    }
  }
  void stack::topelement()
  {
    if(top!=NULL)
    {
      cout<<"top of the stack :"<<top->x<<endl;
    }
    else
    cout<<"underflow"<<endl;
  }
  void stack::isempty()
  {
    if(top==NULL)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
  }
  void stack::trav()
  {
    node *temp=top;
    cout<<"stack is :"<<endl;
    for(;temp!=NULL;temp=temp->next)
    {
      cout<<temp->x<<endl;
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
        s->push();
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
