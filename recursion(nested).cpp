#include<iostream>
using namespace std;
int f(int x)
{
	if(x>100)
	{
		return (x-10);
	}
	else
	{
		return f(f(x+11));
	}
}
int main()
{
	int c=f(30);
	cout<<c;
	return 0;
}
