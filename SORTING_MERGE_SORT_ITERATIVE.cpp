#include<iostream>
using namespace std;
void merge(int a[],int l,int m,int h)
{
	int i,j,k;
	i=l;
	j=m+1;
	k=l;
	int b[100];
	while(i<=m&&j<=h)
	{
		if(a[i]<a[j])
		b[k++]=a[i++];
		else
		b[k++]=a[j++];
	}
	for(;i<=m;i++)
	b[k++]=a[i];
	
	for(;j<=h;j++)
	b[k++]=a[j];
	for(int i=l;i<=h;i++)
	a[i]=b[i];
}
void merge1(int a[],int n)
{
	int p,l,h,i,mid;
	for(p=2;p<=n;p=p*2)
	{
		for(i=0;i+p-1<n;i=i+p)
		{
			l=i;
			h=i+p-1;
			mid=(l+h)/2;
			merge(a,l,mid,h);
		}
	}
	if(p/2<n)
	{
		merge(a,0,p/2-1,n-1);
	}
}
void recmerge(int a[],int l,int h)
{
	if(h>l)
	{
		int mid=(l+h)/2;
		recmerge(a,l,mid);
		recmerge(a,mid+1,h);
		merge(a,l,mid,h);
	}
}
int main()
{
	int n,a[100];
	cout<<"Enter n\n";
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	recmerge(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"   ";
	}
	return 0;
}
