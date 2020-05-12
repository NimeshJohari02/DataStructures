#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*first=NULL;
void create(int a[],int n)
{
	struct node *temp,*last;
	first=new node;
	first->data=a[0];
	last=first;
	for(int i=1;i<n;i++)
	{
		temp=new node;
		temp->data=a[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}
void display(struct node *p)
{
	while(p)
	{
	cout<<p->data<<"  ";
	p=p->next;
	}
cout<<"\n";
}
void insert(int pos,int x)
{
	 struct node *t,*p;
	if(pos==0)
	{
		t=new node;
		t->data=x;
		t->next=first;
		first=t;
	}
	else if(pos>0)
	{
		p=first;
		for(int i=0;i<pos-1&&p;i++)
		{
			p=p->next;
		}
		if(p)
		{
		t=new node;
		t->data=x;
		t->next=p->next;
		p->next=t;
		}
	}
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	create(a,n);
	display(first);
	int pos,val;
	cout<<"Enter Position And Value";
	cin>>pos>>val;
	insert(pos,val);
	display(first);
	return 0;
}
