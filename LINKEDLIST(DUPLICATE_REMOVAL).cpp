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
}
void duplicate(struct node *p)
{
	struct node *q=p->next;
	while(q!=NULL)
	{
		if(p->data!=q->data)
		{
			p=q;
			q=q->next;
		}
		else
		{
			p->next=q->next;
			delete q;
			q =p->next;
		}
	}
	
}
int main()
{
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	create(a,n);
	display(first);
	duplicate(first);
	cout<<"\n LINKED LIST AFTER REMOVING DUPLICATES "
	display(first);
	cout<<endl;
	return 0;
}

