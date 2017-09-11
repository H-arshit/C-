#include<iostream>
#include<stack>
#include<stdio.h>
#include<string.h>
using namespace std;
void rev(char *a,int n)
{
stack<char> s;
for(int i=0;i<n;i++)
{
  s.push(a[i]);
}
for(int j=0;j<n;j++)
{
  a[j]=s.top();
  s.pop();
}
}
int main()
{
char a[50];
cout<<"enter string"<<endl;
gets(a);
rev(a,strlen(a));
cout<<"reversed string "<<endl;
puts(a);
return 0;
}
