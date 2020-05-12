#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<=n/2;i++)
	{
		int temp;
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
	return 0;
}
