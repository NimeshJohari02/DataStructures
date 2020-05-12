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
	while(p!=NULL)
	{
		cout<<p->data<<"  ";
		p=p->next;
	}
}
void revrec(struct node *q,struct node *p)
{
	if(p!=NULL)
	{
		revrec(p,p->next);
		p->next=q;
	}
	else
	{
		first=q;
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
	cout<<"RECURSIVE REVERSING NOWWWW"<<endl;
	revrec(NULL,first);
	display(first);
}
