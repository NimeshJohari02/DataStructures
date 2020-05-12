#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*first=NULL,*second=NULL;

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
void create2(int a[],int n)
{
	struct node *temp,*last;
	second=new node;
	second->data=a[0];
	last=second;
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
void concat(struct node *p,struct node *q)
{
	struct node *m=p;
	while(m->next!=NULL)
	{
		m=m->next;
	}
	m->next=q;
	q=NULL;
}
int main()
{
	int n1,n2,a[100],b[100];
	cout<<"Enter The Number of Elements for Linked List 1 \n";
	cin>>n1;
	cout<<"Enter The Number of Elements for Linked List 2 \n";
	cin>>n2;
	cout<<"ENter The Elements for the First Linked List"<<endl;
	for(int i=0;i<n1;i++)
	cin>>a[i];
	cout<<"Enter The Elements of the second Linked List"<<endl;
	for(int i=0;i<n2;i++)
	cin>>b[i];
	create(a,n1);
	create2(b,n2);
	cout<<"First Linked List \n";
	display(first);cout<<"\n\n";
	cout<<"Second Linked List \n";
	display(second);cout<<"\n\n";
	cout<<"Concatenated Linked List \n";
	concat(first,second);cout<<"\n\n";
	display(first);
	return 0;
}
