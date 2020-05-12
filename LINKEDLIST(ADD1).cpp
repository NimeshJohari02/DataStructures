#include<iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};
class linkedlist
{
  node *first=NULL;
  node  *last;
  int n;
  public:
  void readn();
  int getn();
  void insert(int data);
  void display();
};
void linkedlist::readn()
{
  cout<<"Enter The Number  "<<endl;
  cin>>n;
}
int linkedlist::getn()
{
  return n;
}
void linkedlist::insert(int d)
{
   node *temp;
   temp=new node;
   temp->data=d;
   temp->next=NULL;
   if(first==NULL)
   {
     first=temp=last;
   }
   else
   {
     last->next=temp;
     last=temp;

   }
}
void linkedlist::display()
{
  node *p=first;
  while(p)
  {
    cout<<p->data<<"    ";
    p=p->next;
  }
}
int main()
{
  linkedlist o1;
  o1.readn();
  int a=o1.getn();
  while(a)
  {
    int q=a%10;
    o1.insert(q);
    a=a/10;
  }
  o1.display();

  return 0;
}
