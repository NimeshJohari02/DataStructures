#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
	
}*first=NULL;
void create(int a[],int n)
{
	struct node *last,*temp;
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
void display(struct node *ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
struct node *lsearch(struct node *p,int value)
{
	while(p)
	{
		if(p->data==value)
		{
			return p;
		}
		p=p->next;
		
	}
	return NULL;
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
	int search;
	cout<<"Enter Search Element \n";
	cin>>search;
	cout<<lsearch(first,search);
	return 0;
}
