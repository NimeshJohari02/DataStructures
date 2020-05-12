#include<iostream>
int f[15];
using namespace std;
int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		if(f[n-2]==-1)
		{
			f[n-2]=fib(n-2);
		}
		if(f[n-1]==-1)
		{
			f[n-1]=fib(n-1);
		}
		return(f[n-2]+f[n-1]);
	}
}
int main()
{
	for(int i=0;i<15;i++)
	{
		f[i]=-1;
	}
	cout<<fib(5);
	return 0;
}
