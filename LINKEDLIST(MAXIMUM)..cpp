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
		temp =new node;
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
int max(struct node *p)
{
	int m=INT64_MIN;
	while(p)
	{
		m=p->data>m?p->data:m;
		p=p->next;
	}
	return m;
}
int main()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	cin>>a[i];
	create(a,n);
	display(first);
	cout<<"Maximum is "<<max(first);
	return 0;
}
