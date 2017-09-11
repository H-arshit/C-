#include<iostream>
using namespace std;
struct node
{
  node *prev;
  int x;
  node *next;
};
void create(node*);
void trav(node*);
node* del(node*);
node* ins(node*,node*);
int main()
{
  node *llist=NULL,*next=NULL;
  int x;
  while(1)
  {
  cout<<"1-create 2-insert 3-delete 4-traverse 5-exit"<<endl;
  cin>>x;
  switch(x)
  {
    case 1:
    next=new node;
    llist=next;
    llist->prev=NULL;
    create(llist);
    break;
    case 2:
    next=new node;
    cout<<"enter data"<<endl;
    cin>>(next->x);
    next->next=NULL;
    next->prev=NULL;
    llist=ins(llist,next);
    break;
    case 3:
    llist=del(llist);
    break;
    case 4:
    trav(llist);
    break;
    case 5:
    return 1;
  }
}
}

void create(node *temp)
{ cout<<"enter data"<<endl;
  cin>>(temp->x);
  char x;
  cout<<"press y to add more else press any other key"<<endl;
  cin>>x;
  if(x=='y')
  {
    temp->next=new node;
    temp->next->prev=temp;
    create(temp->next);
  }
  else
  {
    temp->next=NULL;
  }

}
void trav(node *temp)
  {

    cout<<(temp->x)<<endl;
    if(temp->next!=NULL)
    {
    trav(temp->next);
    }

  }
node* del(node *temp)
  { node *head=temp;
    cout<<"enter the position of the data to be deleted"<<endl;
    int i;
    cin>>i;
    if(i==1)
    {
      temp->next->prev=NULL;
      head=temp->next;
      delete temp;
      return head;
    }
    for(;i!=1;i--)
    {
      temp=temp->next;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    delete temp;
    return head;

  }
node* ins(node *temp,node *next)
  { node*head=temp;
    cout<<"enter the position to enter the data"<<endl;
    int n;
    cin>>n;
    if(n==1)
    {
      temp->prev=next;
      next->next=temp;
      head=next;
      return head;
    }
    for(;n!=2;n--)
    {
      temp=temp->next;
    }
    next->prev=temp;
    next->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=next;
    temp->next=next;
    return head;
  }
