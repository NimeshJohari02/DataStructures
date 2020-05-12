#include<iostream>
using namespace std;
int factorial(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main()
{
	int n,r;
	cout<<"Enter n and r"<<endl;
	cin>>n>>r;
	float val=factorial(n)/(factorial(n-r)*factorial(r));
	cout<<val<<endl;
	return 0;
}
