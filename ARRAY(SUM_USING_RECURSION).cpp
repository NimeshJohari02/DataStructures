#include<iostream>
using namespace std;
int arrsum(int a[],int n,int index)
{
	int s=0;
	if(index==n)
	{
		return s;
	}
	else 
	{
		s=s+a[index]+arrsum(a,n,index+1);
	}
}
int main()
{
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int s=arrsum(a,n,0);
	cout<<s;
	return 0;
}
