#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head=NULL;
void create(int a[],int n)
{
	struct node *t,*last;
	head=new node;
	head->data=a[0];
	head->next=head;
	last=head;
	for(int i=1;i<n;i++)
	{
		t=new node;
		t->data=a[i];
		t->next=last->next;
		last->next=t;
		last=t;
	}
	
}
void reverse(struct node *m)
{
	struct node *p,*q,*r;
	p=m;
	q=NULL;
	r=NULL;
	do
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}while(p!=head);
	head=q;
}
void display(struct node *p)
{
	do
	{
		cout<<p->data<<"  ";
	p=p->next;
	}while(p!=head);
	cout<<"\n";
}
int main()
{
	int a[100],n;
	cout<<"Enter the number of elements in the linked list"<<endl;
	cin>>n;
	cout<<"Elements\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	create(a,n);
	cout<<"Displaying Linked List\n\n";
	display(head);
	cout<<"NOW REVERSING CIRCULAR LINKED LIST \n \n";
	reverse(head);
	display(head);
	return 0;
}
