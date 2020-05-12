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
void insert(int x)
{
	struct node *t,*p;
	t=new node;
	t->data=x;
	t->next=first;
	first=t;
}
bool isempty(struct node *p);
int pop()
{

	struct node*p=first;
	if(!isempty(first))
	{
	int x;
	first=first->next;
	x=p->data;
	delete p;
	return x;
	}
	else
	{
		cout<<"Underflow";
		return INT32_MIN;
	}
}
bool isempty(struct node *p)
{
	if(p==NULL)
	{
		return true;
	}
	return false;
}
int main()
{
	int n,a[100];
	cout<<"n=?\n";
	cin>>n;
	cout<<"Elements = \n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	create(a,n);
	cout<<"\n\nSTACK MENU\n\n 1.PUSH 2.POP 3.Display\n\n";
	int ch;
	cin>>ch;
	int val;
	while(ch!=4)
	{

	switch(ch)
	{
		case 1:
	cout<<"Enter Value You Want To PUsh to Stack \n";
	cin>>val;
	insert(val);
			break;
		case 2:
			cout<<"Element Popped  "<<pop()<<endl;
			break;
		case 3:
			display(first);
			break;
	
	}
	cout<<"\n\nSTACK MENU\n\n 1.PUSH 2.POP 3.Display\n\n";
	cin>>ch;
}
	return 0;
}
