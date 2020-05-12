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
void merge(struct node *first,struct node *second)
{
	struct node *last;
	//to decise first node of thr merged list
	if(first->data<second->data)
	{
		third=last=first;
		first=first->next;
		third->next=NULL;
		
	}
	else
	{
		
		third=last=second;
		second=second->next;
		third->next=NULL;
		
	}
	//step by step comparision
	while(first!=NULL&& second!=NULL)
	{
		if(first->data<second->data)
		{
			last->next=first;
			last=first;
			first=first->next;
			last->next=NULL; 
		}
		else
		{
			last->next=second;
			last=second;
			second=second->next;
			last->next=NULL;
		}
	}
	if(first!=NULL)
	{
		last->next=first;
		
	}
	else
	{
		last->next=second;
	}
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
	cout<<"MERGING THE TWO WE GET"<<endl;
	merge(first,second);
	display(third);
return 0;
}
