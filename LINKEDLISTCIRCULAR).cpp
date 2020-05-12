#include<iostream>
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
void display(struct node *h)
{
	do
	{
		cout<<h->data<<"  ";
		h=h->next;
	}while(h!=head);
	cout<<"\n \n";
}
int main()
{
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	create(a,n);
	display(head);
	return 0;
}
