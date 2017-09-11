#include<iostream>
using namespace std;
struct node
{
  int data;
  node *leftsubstree;
  node *rightsubstree;
};
class bst {

  node *root;

   public:

  bst()
  {
    root=NULL;
  }
  ~bst ()
  {
    delete root;
    cout<<"list destroyed"<<endl;
  }
  void add(int element);
  void del(int element);
  node* findnode(node *root,int element);
  node* findend(node *root,int element);
  void show(node *root);
  node* rootaddress();
};
node* bst:: rootaddress()
{
  return root;
}
void bst:: show(node * root)
{
  if(root!=NULL)
    {
      cout<<root->data<<endl;
      cout<<"left tree"<<endl;
      show(root->leftsubstree);
      cout<<"rigth tree"<<endl;
      show(root->rightsubstree);
      return;
    }
}
  node* bst:: findnode(node *root,int element)
  {
    if(root==NULL)
    {
      return root;
    }
    else if(root->data==element)
    {
      return root;
    }
    else if(root->data<element)
    {
      return findnode(root->rightsubstree,element);
    }
    else

    {
      return findnode(root->leftsubstree,element);
    }

  }
  void bst:: add(int element)
  {
      node *temp=new node;
      temp->data=element;
      temp->leftsubstree=temp->rightsubstree=NULL;
      node *ins=findend(root,element);
      if(root!=NULL)
      ins=temp;
      else
      root=temp;
  }
  void bst::del(int element)
  {
    node *temp=findend(root,element);
    if(temp==NULL)
    {
      cout<<"no such entry found"<<endl;
      return;
    }
    else
    {
      cout<<"aabhe mere baski nahi"<<endl;
    }
  }
  node* bst:: findend(node *root,int element)
    {
      if(root==NULL)
      {
        return root;
      }
        if(element>root->data)
        {
          return findend(root->rightsubstree,element);
        }
        else
        {
          return findend(root->leftsubstree,element);
        }
    }
int main()
{
  bst *root=new bst;
  int element;
  cin>>element;
  root->add(element);
  cin>>element;
  root->add(element);
  cin>>element;
  root->add(element);
  cin>>element;
  root->add(element);
  cin>>element;
  root->add(element);
  cin>>element;
  root->add(element);
  cin>>element;
  root->add(element);
  cout<<"Print the tree"<<endl;
  root->show(root->rootaddress());
  return 0;
}
