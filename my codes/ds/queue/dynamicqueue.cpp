#include<iostream>
using namespace std;
struct node
{
  int x;
  node *link;
};
class queue
{
  node *front, *rear;
public:
  queue()
  {
    front=rear=NULL;
  }
  void enqueue(int);
  void dequeue();
  void isempty();
  void frontelement();
  void traverse();
};
void queue::enqueue(int a)
{
  node *temp;
  temp=new node;
  temp->x=a;
  temp->link=NULL;
  if (rear==NULL)
   {
     front=rear=temp;
   }
   else
   {
     rear->link=temp;
     rear=temp;
   }
}
void queue::dequeue()
{
  if(front==NULL)
  {
    cout<<"underflow"<<endl;
  }
  else if (front==rear)
  {
    cout<<"value deleted "<<front->x<<endl;
    delete front;
    front=rear=NULL;
  }
  else
  {
    node *temp;
    temp=front->link;
    cout<<"value deleted "<<front->x<<endl;
    delete front;
    front=temp;
  }

}
void queue::isempty()
{
  if(front==NULL)
  {
    cout<<"yes"<<endl;
  }
  else
  {
    cout<<"no"<<endl;
  }
}
void queue::frontelement()
{
  if(front!=NULL)
  {
    cout<<front->x<<endl;
  }
}
void queue::traverse()
{
  node *temp;
if(front!=NULL)
  {
    temp=front;
  while(temp!=NULL)
  {
    cout<<temp->x<<endl;
    temp=temp->link;
  }
  }
}

int main()
{
  queue *s;
  s=new queue;
  int x;
  while (1)
   {
    cout<<"1-ADD 2-REMOVE 3-FRONT ELEMENT 4-IS EMPTY 5-TRAVERSE 6-EXIT"<<endl;
    cin>>x;
    switch(x)
    {
      case 1:
      int y;
      cout<<"enter data ";
      cin>>y;
      s->enqueue(y);
      break;
      case 2:
      s->dequeue();
      break;
      case 3:
      s->frontelement();
      break;
      case 4:
      s->isempty();
      break;
      case 5:
      s->traverse();
      break;
      case 6:
      return 0;

    }
   }
}
