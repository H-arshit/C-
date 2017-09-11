#include<iostream>
using namespace std;
const int size=5;
class queue
{
  int data[size],front,rear;
public:
  queue()
  {
    front=rear=-1;
  }
  void push(int);
  void pop();
  void traverse();
};
void queue::push(int a)
{
  if(rear==((front+size-1)%size))  //modified to make circular queue
  {
    cout<<"overflow"<<endl;
  }
  else if(rear==-1)
  {
    data[++rear]=a;
    front=rear;
  }
  else
  { rear=(rear+1)%size;  //modified to make circular queue
    data[rear]=a;
  }
}
void queue::pop()
{

  if(front==-1)
  {
    cout<<"underflow"<<endl;
  }
  else if(front==rear)
  {
    cout<<"data removed "<<data[front]<<endl;
    front=rear=-1;
  }
  else
  {
    cout<<"data removed "<<data[front]<<endl;
    front=(front+1)%size;  //modified to make circular queue
  }
}
void queue::traverse()
{ if(front!=-1)
  for(int i=front;i!=rear;i=((i+1+size)%size)) //one element cannot be displayed
  {
    cout<<data[i]<<"  ";
  }

  cout<<endl;
}
int main()
{
  queue *s;
  s=new queue;
  int x;
  while (1)
   {
    cout<<"1-push 2-pop 3-traverse 4-exit"<<endl;
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
      s->traverse();
      break;
      case 4:
      return 0;

    }
   }
}
}
