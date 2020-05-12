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
}

int main()
{
	int a[100],b[100],n;
	cout<<"Enter The Number Of Elements in the linked list\n\n";
	cin>>n;
	cout<<"Elements ? \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[n-1-i]=a[i];
	}
	create(a,n);
	cout<<"Displaying Initially Created Link List"<<endl;
	display(first);
	cout<<endl;
	create(b,n);
	cout<<"Displaying Linked List By Reversing the Elements is given by\n \n";
	display(first);
	return 0;
}

