#include<iostream>
int counter=0;
using namespace std;
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*first=NULL;
void create(int a[],int n)
{
	struct node *temp,*last;
	first=new node;
	first->data=a[0];
	first->next=NULL;
	first->prev=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		temp =new node;
		temp->data=a[i];
		temp->next=last->next;
		temp->prev=last;
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
		counter++;
	}
	cout<<"\n";
}                                                            
	
	
int main()
{
	int n,a[100];
	cout<<"No. of elements \n";
	cin>>n;
	cout<<"Elements ? \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	create(a,n);
	display(first);
	cout<<first->next->next->prev->data;
	return 0;
}
