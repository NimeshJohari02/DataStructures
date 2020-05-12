#include<iostream>
using namespace std;
struct node 
{
	int data;
	struct node *next;
	struct node *prev;
}*first=NULL;

void create(int a[],int n)
{
	struct node *t,*last;
	first=new node;
	first->data=a[0];
	first->next=first->prev=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		t=new node;
		t->data=a[i];
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t; 
	}
	
}
void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<"  ";
		p=p->next;
	}
	cout<<"\n\n";
}
void rev(struct node *p)
{
	struct node *temp;
	while(p!=NULL)
	{
		temp=p->next;
		p->next=p->prev;
		p->prev=temp;
		p=p->prev;
		if(p!=NULL&&p->next==NULL)
		{
			first=p;
		}
	}
}
void revdis()
{
	struct node *p=first;
	while(p->next){
		p=p->next;
	}
	while(p->prev!=NULL)
	{
		cout<<p->data;
		p=p->prev;
	}
}
int main()
{
	int a[100],n;
	cout<<"Enter No. of elements?\n";
	cin>>n;
	cout<<"Enter the elements of the Linked List \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	create(a,n);
	cout<<"CREATING LINKED LIST AND DISPLAYING \n\n ";
	display(first);
	
	revdis();
	cout<<"REVERSING LINKED LIST AND DISPLAYING \n\n ";
	display(first);
	return 0;
}
