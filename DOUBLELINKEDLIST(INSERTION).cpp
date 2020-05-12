#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*first=NULL;
void create(int a[],int n)
{
	struct node *t,*last;
	first=new node;
	first->data=a[0];
	first->next=first->prev=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		t=new node;
		t->data=a[i];
		t->next=NULL;
		t->prev=last;
		last->next=t;
		last=t;
	}
}
void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<"  ";
		p=p->next;	
	}
	cout<<endl;
}
int count(struct node *p)
{
	int c=0;
	while(p)
	{
		c++;
		p=p->next;
	}
	return c;
}
void insert(int pos,int val)
{
	if(pos<0||pos>count(first))
	{
		return;
	}
	else if(pos==0)
	{
		struct node *t;
		t=new node;
		t->data=val;
		t->next=first;
		t->prev=NULL;
		first=t;
	}
	else
	{
		struct node *t,*p;
		p=first;
		for(int i=0;i<pos-1;i++)
		{
			p=p->next;
		}
		t=new node;
		t->data=val;
		t->next=p->next;
		t->prev=p;
		if(p->next!=NULL)
		{
			p->next->prev=t;
		}
		p->next=t;
		}
}
int main()
{
	int n,a[100];
	cout<<"ENter The number of elements in linked list\n";
	cin>>n;
	cout<<"Enter The Elements of the linked list\n\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	create(a,n);
	display(first);
	cout<<"Enter The Position You want to Insert(0 For Before First) And The Value \n\n";
	int pos,val;
	cin>>pos>>val;
	insert(pos,val);
	display(first);
	cout<<*(first->next->next->prev);
	return 0;
}
