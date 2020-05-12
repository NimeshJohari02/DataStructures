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
	
	void insert(int pos,int x)
{
	 struct node *t,*p;
	if(pos==0)
	{
		t=new node;
		t->data=x;
		t->next=first;
		first=t;
	}
	else if(pos>0)
	{
		p=first;
		for(int i=0;i<pos-1&&p;i++)
		{
			p=p->next;
		}
		if(p)
		{
		t=new node;
		t->data=x;
		t->next=p->next;
		p->next=t;
}
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
	
	int pos,val;
	cout<<"Enter Position And Value FOR INSERTION";
	cin>>pos>>val;
	insert(pos,val);
	display(first);
	
	int pos1;
	cout<<"Enter Pos u Want to Delete Node From"<<endl;
	cin>>pos1;
	int n3 =remove(pos1);
	cout<<n3<<"\n";
	display(first);
	
	
	cout<<"MERGING THE TWO WE GET"<<endl;
	merge(first,second);
	display(third);
	
	
return 0;
}
