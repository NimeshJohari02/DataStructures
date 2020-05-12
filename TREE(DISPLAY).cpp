#include<iostream>
using namespace std;
class node
{
	public:
		node *lchild,*rchild;
		int data;
		
};

class Queue
{
	int size,front,rear,**Q;
	public:
		Queue(int n){
			front=rear=-1;this->size=n;
			Q= new node* [this->size];
		}
		void Enqueue(node *x);
		node* Dequeue();
		void display();
};
void Queue::Enqueue(node *x)
{
	if(front==-1)
	    front=0;
	
	if(rear==size-1)
	{
		cout<<"Queue Full \n\n";
	}
	
	else
	{
		rear++;
		Q[rear]=x;
	}
}
node* Queue::Dequeue()
{
	node  *x=NULL;
	if(front==-1||front>rear)
	{
		cout<<"Queue Empty\n\n";
	}
	else
	{
		x=Q[front];
		front++;
	}
	if(front==rear)
	{
		front=rear=-1;
	}
	return x;
}
void Queue::display()
{
	for(int i=front;i<=rear;i++)
	cout<<Q[i]<<"\t";
	cout<<"\n\n";
}
class tree
{
	public:
		node *root;
		tree(){
			*root=NULL;
			
		}
		void createtree();
		void preorder(node *p);
		void postorder(node *p);
		void inorder(node *p);
		void levelorder(node *p);
		
	
}
void tree::createtree()
{

{	 node *p,*t;
	int x;
	queue Q(100);
	
	cout<<"Enter The Root Value \n\n";
	cin>>x;
	root=new node;
	root->data=x;
	root->lchild=root->rchild=NULL;
	q.push();
	while(!q.empty())
	{
		q.pop();
		p=q.front();
		cout<<"Enter Left Child \n";
		cin>>x;
		if(x!=-1)
		{
			t=new node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			q.push(p);
		}
		cout<<"Enter Right  Child \n";
		cin>>x;
		if(x!=-1)
		{
			t=new node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			q.push(p);
		}
	}
	
}
void tree::preorder(node *p)
{
	if(p)
	{
		cout<<p->data<<"    ";
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
int main()
{
	
}
