#include<iostream>
using namespace std;
class stack
{
	int a[100],n,top;
	public:
	void getdata();
	bool isfull();
	bool isempty();
	void push(int);
	int pop();
	stack()
	{
		int n=10;
		int top=-1;
		for(int i=0;i<n;i++)
		a[i]=0;
	}
	
}
bool stack::isfull()
{
	if(top==n-1)
	return true;
	else
	return false;
}
bool stack::isempty()
{
	if(top==-1)
	return true;
	else
	return false;
}
void stack::getdata()
{
	int n=10;
	cout<<"Enter The Elements Of The Queue";
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void stack::push(int x)
{
	a[top++]=x;
}
int stack::pop()
{
	if(!*this.isempty())
	{
		return INT32_MAX;
	}
	return (a[top--]);
}
int main()
{
	
}
