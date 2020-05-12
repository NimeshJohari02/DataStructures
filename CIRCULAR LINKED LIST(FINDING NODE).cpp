#include<iostream>
#include<math.h>
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
int findpos(struct node *t,int s)
{
	int i=1;
	do
	{
		if(t->data==s)
		{
		return i;
	   }
	   else
	   {
	   	i++;
	   	t=t->next;
	   }
	}while(t!=head);
}

int main()
{
	int n;
	cout<<"Enter Number of Elements \n";
	int a[100];
	cin>>n;
	cout<<"Elements \n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	create(a,n);
	display(head);
	cout<<"Enter The Element 1 ";
	int search1;
	cin>>search1;
	cout<<"Enter The Element 2 ";
	int search2;
	cin>>search2;
	int x=findpos(head,search1);
	int y=findpos(head,search2);
	cout<<"Minimum Difference Between The two is  "<<fabs(x-y);
	return 0;
}
