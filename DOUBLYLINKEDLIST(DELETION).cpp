#include<iostream>
using namespace std;
struct node 
{
	int data;
	struct node *next;
	struct node *prev;
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
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t; 
	}
	
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
int Delete(int pos)
{
	if(pos<0||pos>count(first))
	{
		return INT32_MIN;
	}
	else if(pos==0)
	{
		struct node *p=first;
		first=p->next;
		int x=p->data;
		delete p;
		if(first){
			first->prev=NULL;
		}
		return x;
	}
	else
	{
		struct node *p=first;
		for(int i=0;i<=pos-1;i++)
		{
			p=p->next;
		}
		p->prev->next=p->next;
		if(p->next!=NULL)
		{
			p->next->prev=p->prev;
		}
		int x=p->data;
		delete p;
		return x;
	}
	
}
void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<"  ";
		p=p->next;
	}
	cout<<"\n\n";
}
int main()
{
	int a[100],n;
	cout<<"Enter No. of elements?\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	create(a,n);
	display(first);
	cout<<"Enter The address you want  to delete from 0 for first "<<endl;
	int pos;
	cin>>pos;
	int x=Delete(pos);
	cout<<"Deleted Element Is ="<<x<<endl;
	cout<<"Remaining Linked list is \n ";
	display(first);
	return 0;
}
