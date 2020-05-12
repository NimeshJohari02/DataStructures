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
void rev()
{
	struct node *p=first;
	struct node *q=NULL;
	struct node *r=NULL;
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
	
}
int main()
{
	int a[100],n;
	cout<<"number of Elements"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
    }
    create(a,n);
    cout<<"BEFORE REVERSING LINKS THE LINKED LIST IS LIKE \n";
	display(first);
	rev();
	cout<<"AFTER REVERSING THE LINKS THE LINKED LIST BECOMES"<<endl;
	display(first);
}
