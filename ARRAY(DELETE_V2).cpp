#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int del;
	cin>>del;
	for(int i=del;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
	return 0;
}
