#include<iostream>
using namespace std;
int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return(fib(n-2)+fib(n-1));
	}
}
int main()
{
	cout<<fib(5)<<endl;
	return 0;
}
