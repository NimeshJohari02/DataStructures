#include<iostream>
using namespace std;
void funb(int);
void funa(int x)
{
	if(x>0)
	{
		cout<<"INSIDE FUNCTION A \n";
		cout<<x<<endl;
		cout<<"now calling function B"<<endl;
		funb(x-1);
	}
}
void funb(int y)
{
	if(y>1)
	{
		cout<<"INSIDE FUNCTION B "<<endl;
		cout<<y<<endl;
		cout<<"NOW CALLING A WITH N/2 \n";
		funa(y/2);
	}
}

int main()
{
	funa(20);
	return 0;
}
