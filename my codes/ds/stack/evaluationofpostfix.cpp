#include<iostream>
#include<ctype.h>
#include<math.h>
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
  void push(int num);
  int pop();

};
void stack::push(int num)
{
  node *temp;
  temp=new node;
  temp->link=top;
  temp->x=num;
  top=temp;
}
int stack::pop()
{
  node *temp;
  int z =top->x;
  temp=top->link;
  delete top;
  top=temp;
  return z;
}
int main()
{
  stack s;
  int op1,op2;
  char a[20];
  cout<<"enter postfix expression"<<endl;
  cin>>a;
  for(int i=0;a[i]!=0;i++)
  {
    if(isdigit(a[i]))
    {
      cout<<"push "<<(int)(a[i]-'0')<<endl;
      s.push(((int)(a[i]-'0')));
    }
    else if(a[i]=='+' || a[i]=='^'|| a[i]=='*' || a[i]=='/' || a[i]=='-')
    {
      op2=s.pop();
      cout<<"pop "<<op2<<endl;
      op1=s.pop();
      cout<<"pop "<<op1<<endl;
      switch(a[i])
      {
        case '^':
        cout<<"push "<<pow(op1,op2)<<endl;
        s.push(pow(op1,op2));
        break;
        case '*':
        s.push(op1*op2);
        cout<<"push "<<(op1*op2)<<endl;
        break;
        case '/':
        cout<<"push "<<(op1/op2)<<endl;
        s.push(op1/op2);
        break;
        case '+':
        cout<<"push "<<(op1+op2)<<endl;
        s.push(op1+op2);
        break;
        case '-':
        cout<<"push "<<(op1-op2)<<endl;
        s.push(op1-op2);
        break;
      }
    }
  }
  cout<<"result after evaluation "<<s.pop();
  return 0;
}
