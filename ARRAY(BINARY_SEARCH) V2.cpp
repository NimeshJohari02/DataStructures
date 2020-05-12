#include<iostream>
using namespace std;
int bin(int a[],int n,int val)
{
	int h,m,l;
	h=n;
	l=0;
	m=(h+l)/2;
	while(h>=l)
	{
		//YOU CAN DEFINE MID GERE AND ONLY ONE DEFINITION WOULD DO!!
		if(a[m]==val)
		{
			return m+1;
		}
		else if(val>a[m])
		{
				h=n;
				l=m+1;
				m=(h+l)/2;
		}
		else
		{
				h=m-1;
				l=0;
				m=(h+l)/2;
		}
	}
	return -1;
}
int main()
{
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int r=1;r<=n-1;r++)
	{
		for(int i=0;i<=n-r-1;i++)
		{
			if(a[i]>=a[i+1])
			{
				int temp;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	int val;
	cout<<"Enter Search"<<endl;
	cin>>val;
	cout<<"\n\n\n"<<bin(a,n,val);
	return 0;
}
