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
cout<<"\n";
}
void insert_sorted(int val)
{
	struct node *p,*q,*temp;
	p=first;
	while(p!=NULL&&p->data<val)
	{
		q=p;
		p=p->next;
	}
	temp=new node;
	temp->data=val;
	temp->next=q->next;
	q->next=temp;
}
int main()
{
	int n,a[100];
	cout<<"ENter n"<<endl;
	cin>>n;
	cout<<"Please Enter Sorted Elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	create(a,n);
	int ins;
	cout<<"Enter The Element That You Want to insert"<<endl;
	cin>>ins;
	insert_sorted(ins);
	display(first);
}
