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
int issorted(struct node *p)
{
	int x=INT64_MIN;
	while(p)
	{
		if(p->data>x)
		{
			x=p->data;
		}
		else
		{
			return 0;
		}
		p=p->next;
	}
	return 1;
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
	cout<<endl;
	if(issorted(first))
	{
		cout<<" LINK LIST IS SORTED "<<endl;
	}
	else
	{
		cout<<"NOT SORTED"<<endl;
	}
}
