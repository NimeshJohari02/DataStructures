#include<iostream>
int count=0;
using namespace std;
struct node 
{
	int data;
	struct node *next;
}*head=NULL;
void create(int a[],int n)
{
	struct node *temp,*last;
	head=new node;
	head->data=a[0];
	head->next=head;
	last=head;
	for(int i=1;i<n;i++)
	{
		temp=new node;
		temp->data=a[i];
		temp->next=last->next;
		last->next=temp;
		last=temp;
	}
}
void display(struct node *p)
{
	do
	{
		cout<<p->data<<"  ";
		p=p->next;
		count++;
	}while(p!=head);
	cout<<"\n";
}
int Delete(int index)
{
		if(index<0||index>count)
		{
			return INT64_MIN;
		}
		else if(index>0)
		{
			struct node *p,*q;
			p=head;
			for(int i=0;i<index-2;i++)
			{
				p=p->next;
			}
			q=p->next;
			p->next=q->next;
			int x=q->data;
			delete q;
			return x;
		}
		else
		{
			struct node *p,*q;
			p=head;
			for(int i=0;p->next!=head;i++)
			{
				p=p->next;
			}
			p->next=head->next;
			int x=head->data;
			delete head;
			head=p->next;
			return x;
		}
}
int main()
{
	int n,a[100];
	cout<<"Enter The Number of Elements of the LL \n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	create(a,n);
	display(head);
	int index,x;
	cout<<"Enter the element you want to delete \n\n";
	cin>>index;
	x=Delete(index);
	cout<<"Deleted Element is "<<x<<endl;
	cout<<"Linked List status \n\n";
	display(head);
		return 0;
}
