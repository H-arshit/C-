#include<iostream>
#include<string>
using namespace std;
struct node
{
  char x;
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
  void push(char);
  char pop();
  char topel();
  node* adtop();
};
void stack::push(char a)
{
  node *temp;
  temp=new node;
  temp->link=top;
  temp->x=a;
  top=temp;
}
char stack::pop()
{ char b;
  node *temp;
  temp=top->link;
  b=top->x;
  delete top;
  top=temp;
  return b;
}
node* stack::adtop()
{
  return top;
}
char stack::topel()
{
  return top->x;
}
void postf()
{
  stack s;
  int i=-1,j=-1;
  char a[100],b[100];
  cin>>a;
  for(int i=0;a[i]!=0;i++)
  {
    if(a[i]<97 || a[i]>122)
      {
        if(s.adtop()==NULL || s.topel()=='^' && a[i]=='^' || a[i]=='(' || s.topel()=='*' && a[i]=='*'  || s.topel()=='/' && a[i]=='/'  || s.topel()=='+' && a[i]=='+'  || s.topel()=='-' && a[i]=='-' )
        {
          s.push(a[i]);
        }

        else if(s.topel()=='-' && a[i]=='+' || s.topel()=='+' && a[i]=='-' || s.topel()=='+' && a[i]=='^' || s.topel()=='*' && a[i]=='^' || s.topel()=='-' && a[i]=='^')
        {
          s.push(a[i]);
        }
        else if(s.topel()=='/' && a[i]=='^' || s.topel()=='+' && a[i]=='*' || s.topel()=='-' && a[i]=='*' || s.topel()=='-' && a[i]=='/' || s.topel()=='+' && a[i]=='/')
        {
          s.push(a[i]);
        }
        else if(s.topel()=='(' && a[i]=='^' || s.topel()=='(' && a[i]=='*' || s.topel()=='(' && a[i]=='/' || s.topel()=='(' && a[i]=='+' || s.topel()=='(' && a[i]=='-')
        {
          s.push(a[i]);
        }
        else if(s.topel()=='^' && a[i]=='*' || s.topel()=='^' && a[i]=='/')
        {
          do
          {
            b[++j]=s.pop();
            if(s.topel()=='(')
            {
              break;
            }
          }while(s.topel()=='^' || s.topel()=='*' || s.topel()=='/');
          s.push(a[i]);
        }
        else if(s.topel()=='^' && a[i]=='+' || s.topel()=='^' && a[i]=='-')
        {
          do
          {
            b[++j]=s.pop();
            if(s.topel()=='(')
            {
              break;
            }
          }while(s.topel()=='^' || s.topel()=='*' || s.topel()=='/' || s.topel()=='+' || s.topel()=='-');
          s.push(a[i]);
        }
        else if (s.topel()=='*' && a[i]=='-' || s.topel()=='/' && a[i]=='-' || s.topel()=='*' && a[i]=='+' || s.topel()=='/' && a[i]=='+')
        {
          do
          {
            b[++j]=s.pop();
            if(s.topel()=='(')
            {
              break;
            }
          }while(s.topel()=='*' || s.topel()=='/' || s.topel()=='-' || s.topel()=='+');
          s.push(a[i]);
        }
        else if(a[i]==')')
        {
          while(s.topel()!='(')
          {b[++j]==s.pop();}
          s.pop();
        }

      }
      else
      {
        b[++j]=a[i];
      }

    }
    while(s.adtop()!=NULL)
    {  b[++j]=s.pop(); }
      b[++j]=NULL;
  cout<<b;
}
int main()
{
 cout<<"enter the infix notation"<<endl;
 postf();
 return 0;
 }
