#include<iostream>
using namespace std;
struct node
{
  int a;
  node *link;
};
void creation(node*);
void trav(node*);
node* insert(node*,node*,int);
node* del(node*,int);
node* rev(node*);
int main()
{
  node *llist=NULL,*next=NULL;
  int x;
    int y;
  while(1)
  {
    cout<<"1-creating 2-traverse 3-insert 4-delete 5-reverse 6-exit"<<endl;
    cin>>x;
    switch(x)
    {
      case 1:
        next=new node;
        llist=next;
        creation(llist);
        break;
      case 2:
        trav(llist);
        break;
      case 3:
        next=new node;
        cout<<"enter data"<<endl;
        cin>>(next->a);
        next->link=NULL;
        cout<<"enter the position of new data"<<endl;
        cin>>y;
        llist=insert(llist,next,y);
        break;
      case 4:
        cout<<"enter the position to be deleted"<<endl;
        cin>>y;
        llist=del(llist,y);
        break;
      case 5:
        llist=rev(llist);
        break;
      case 6:
      return 1;
    }
  }
}

  void creation(node *next)
  { cout<<"enter data"<<endl;
    cin>>(next->a);
    cout<<"press y to enter another entry"<<endl;
    char x;
    cin>>x;
    if(x=='y')
    {
      next->link=new node;
      creation(next->link);
    }
    else
    {
      next->link=NULL;
    }

  }
  void trav(node *temp)
  {
    if(temp==NULL)
    cout<<"ended"<<endl;
    else
    {
      cout<<(temp->a)<<endl;
      trav(temp->link);

    }

  }
  node* insert(node *llist,node *next,int pos)
  {
    if(pos==1)
    {
      next->link=llist;
      llist=next;
      return llist;
    }
    node *temp=llist;
    for(int i=1;i<(pos-1);i++)
    {
      temp=temp->link;

    }
    next->link=temp->link;
    temp->link=next;
    return llist;
  }
  node* del(node *llist,int pos)
  { node *temp=llist;
    if(pos==1)
    {
      llist=llist->link;
      delete temp;
      return llist;
    }
    for(int i=1;i<pos-1;i++)
    temp=temp->link;
    node *tempx=temp->link;
    temp->link=tempx->link;
    delete tempx;
    return llist;

  }
  node*rev(node*head)
  {
    node *temp=head,*prev=NULL,*next;
    while(temp!=NULL)
    {
      next=temp->link;
      temp->link=prev;
      prev=temp;
      temp=next;
    }
    head=prev;
    return head;
  }
