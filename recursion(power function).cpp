#include<iostream>
using namespace std;
int pow(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		int temp=m*pow(m,n-1);
		return temp;
	}
}
int main()
{
	int a=pow(2,5);
	cout<<a;
	return 0;
}
