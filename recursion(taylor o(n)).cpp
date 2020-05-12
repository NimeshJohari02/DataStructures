#include<iostream>
#include<math.h>
using namespace std;
int r1(int x,int n)
{
	int s=1;
	for(;n>0;n--)
	{
		s=1+s*x/n;
	}
	return s;
}
int r2(int x,int n)
{
	static int s=1;
	if(n==0)
	{
		return s;
	}
	else
	{
		s=1+s*x/n;
		return(r2(x,n-1));
	}
}
int main()
{
	int s1=r1(12,4);
	cout<<s1<<endl;
	cout<<r2(12,4);
	return 0;
	
}
