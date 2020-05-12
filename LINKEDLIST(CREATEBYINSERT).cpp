#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *next;
}*first=NULL,*last=NULL;
void insert(int d)
{
  node *temp;
  temp=new node;
  temp->next=NULL;
  temp->data=d;

  if(first==NULL)
  {
    first=last=temp;
  }
  else
  {
    last->next=temp;
    last=temp;
  }
}
void display(node *p)
{
  while(p)
  {
    cout<<p->data<<"    ";
    p=p->next;
  }

}
int main()
{

  insert(12);
  insert(13);
  insert(14);
  insert(15);
  insert(16);
  display(first);

}
