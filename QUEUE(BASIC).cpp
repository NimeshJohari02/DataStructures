#include<iostream>
using namespace std;
struct queue
{
	int *q,rear,front,size;
};

void create(struct queue *Q,int size)
{
	Q->size=size;
	Q->front=Q->rear=-1;
	Q->q=new int[Q->size];
	
}
void enqueue(struct queue *dummy,int n)
{
	
	if(dummy->front==-1)
	    dummy->front=0;
	
	if(dummy->rear==dummy->size-1)
	{
		cout<<"Queue Full \n\n";
	}
	
	else
	{
		dummy->rear++;
		dummy->q[dummy->rear]=n;
	}
	
}
int dequeue(struct queue *dummy)
{
	int x=-1;
	if(dummy->front==-1||dummy->front>dummy->rear)
	{
		cout<<"Queue Empty\n\n";
	}
	else
	{
		x=dummy->q[dummy->front];
		dummy->front++;
	}
	if(dummy->front==dummy->rear)
	{
		dummy->front=dummy->rear=-1;
	}
	return x;
}
void display(struct queue dummy)
{
	for(int i=dummy.front;i<=dummy.rear;i++)
	{
		cout<<dummy.q[i]<<"   ";
	}
	cout<<endl;
	
}

int main()
{
	int size;
	struct queue q1;
	cout<<"Enter The Size Of The Queue \n\n";
	cin>>size;
	create(&q1,size);
	enqueue(&q1,12);
	enqueue(&q1,13);
	enqueue(&q1,14);
	enqueue(&q1,15);
	enqueue(&q1,16);
	enqueue(&q1,17);
	display(q1);
	cout<<endl;
	cout<<dequeue(&q1)<<endl;
	display(q1);
cout<<dequeue(&q1)<<endl;//	
cout<<dequeue(&q1)<<endl;
cout<<dequeue(&q1)<<endl;
cout<<dequeue(&q1)<<endl;
enqueue(&q1,13);
	enqueue(&q1,14);
	enqueue(&q1,15);
	display(q1);
cout<<endl<<endl;
	return 0;
}
