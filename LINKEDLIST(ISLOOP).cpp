#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*first=NULL,*second=NULL,*third=NULL;

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

int isloop(struct node *f)
{
	struct node *p,*q;
	p=q=first;
	do
	{
		p=p->next;
		q=q->next;
		q=q?q->next:q;
	}while(p && q&& p!=q);
	return(p==q?1:0);
	
}
int main()
{
	int n1,a[100];
	cout<<"Enter The Number of Elements for Linked List 1 \n";
	cin>>n1;
	cout<<"ENter The Elements for the First Linked List"<<endl;
	for(int i=0;i<n1;i++)
	cin>>a[i]; 
	create(a,n1);
	cout<<"First Linked List \n";
	display(first);cout<<"\n\n";
	
	struct node *t1,*t2;
	t1=first;
	t2=first->next->next;
	for(int i=0;t1->next!=NULL;i++)
	{
		t1=t1->next;
	}
	t1->next=t2;
	if(isloop(first))
	{
		cout<<"Loop Exist\n";
	}
	return 0;
}

