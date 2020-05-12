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
int remove(int pos)
{
	struct node *p=first,*q=NULL;
	if(pos!=1)
	{
		for(int i=0;i<pos-1&&p;i++)
		{
			q=p;
			p=p->next;
		}
		if(p)
		{
		
		q->next=p->next;
		int x=p->data;
		delete p;
		return x;
	}
	}
	else
	{
		first=p->next;
		int x=p->data;
		delete p;
		return x;
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
	int pos;
	cout<<"Enter Pos u Want to Delete Node From"<<endl;
	cin>>pos;
	int n2 =remove(pos);
	cout<<n2<<"\n";
	display(first);
	return 0;
}
