#include<iostream>
using namespace std;
class Queue
{
	int size,front,rear,*Q;
	public:
		Queue(int n){
			front=rear=-1;this->size=n;
			Q=new int[this->size];
		}
		void Enqueue(int x);
		int Dequeue();
		void display();
};
void Queue::Enqueue(int x)
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
int Queue::Dequeue()
{
	int x=-1;
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
int main()
{
	Queue Q1(5);
	Q1.Enqueue(5);
	Q1.Enqueue(6);
	Q1.Enqueue(7);
	Q1.display();
	cout<<Q1.Dequeue()<<endl;
	Q1.display();
	
}
