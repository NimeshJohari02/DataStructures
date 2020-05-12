#include<iostream>
using namespace std;
int counter=0;
struct node 
{
	int data;
	struct node *next;
}*first=NULL;

void create(int a[],int n)
{
	struct node *last,*temp;
	first=new node;//first=struct node*malloc(n*sizeof(struct node)));
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		temp=new node;
		temp->data=a[i];
		temp->next=NULL;
		last->next=temp;//linking 
		last=temp;
	}
}
void display(struct node *ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
		counter++;
	}
}
struct node *lsearch(struct node *p,int key)
{
	while(p!=NULL)
	{
		if(p->data==key)
		{
			return p;
		}
		else
		{
		p=p->next;
		}
	}
	return NULL;
}
int main()
{
	int n,a[100];
	cout<<"Enter The Number Of Elements You Want to Enter TO liniked List"<<endl;
	cin>>n;
	cout<<"Enter Elements of the Linked List"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Creating Linked List Please Wait  \n \n"<<endl;
	create(a,n);
	cout<<"DISPLAYING LINKED LIST"<<endl;
	display(first->next);
	cout<<"No. Of of nodes present in the linked list is \n"<<counter<<endl;
	cout<<"Enter The Number you want to search for "<<endl;
	int search;
	cin>>search;
	if(lsearch(first,search)!=NULL)
	{
		cout<<"Element Found"<<endl;
	}
	else
	{
		cout<<"Not Found \n ";
	}
	
	return 0;
}
