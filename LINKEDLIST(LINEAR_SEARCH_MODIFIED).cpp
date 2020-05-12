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
		cout<<p->data<<endl;
		p=p->next;
	}
}
struct node *search(struct node *p,int key)
{
	struct node *q=NULL;
	while(p)
	{
		if(p->data==key)
		{
			q->next=p->next;
			p->next=first;
			first=p;
			return p;
		}
		q=p;
		p=p->next;
	}
	return NULL;
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
	display(first);
	int key;
	cout<<"Enter Key Value";
	cin>>key;
	struct node *temp=search(first,key);
	cout<<temp->data<<"\n\n\n"<<endl;
	display(first);
	return 0;
}
