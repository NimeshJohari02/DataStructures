#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head=NULL;
void create(int a[],int n)
{
	struct node *temp,*last;
	head=new node;
	head->data=a[0];
	head->next=head;
	last=head;
	for(int i=1;i<n;i++)
	{
		temp=new node;
		temp->data=a[i];
		temp->next=last->next;
		last->next=temp;
		last=temp;
	}
}
void display(struct node *h)
{
	struct node *p=h;
	do
	{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=head);
cout<<"\n\n";
}
int count(struct node *p)
{
	int l=0;
	do
	{
		l++;
		p=p->next;
	}while(p!=head);
	return l;
}
void insert(int val,int pos)
{
	if(pos<0||pos>count(head))
	{
		return;
	}
	struct node *p=head,*temp;
	if(pos==0)
	{
	
	for(int i=0;p->next!=head;i++)
	{
		p=p->next;
	}
	temp=new node;
	temp->data=val;
	temp->next=head;
	p->next=temp;
	head=temp;
	}
	else
	{
		temp=new node;
		for(int i=0;i<pos-1;i++)
		{
			p=p->next;
		}
		temp->data=val;
		temp->next=p->next;
		p->next=temp;
		
		
	}
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	create(a,n);
	display(head);
	int val,pos;
	cout<<"Enter The value you want to enter and at what pos (0 to insert before head) \n";
	cin>>val>>pos;
	insert(val,pos);
	cout<<"\n\n\n";
	display(head);
	return 0;
}
