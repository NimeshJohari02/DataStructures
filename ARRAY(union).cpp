#include<iostream>
using namespace std;
int docopy(int a[],int n,int search)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==search)
		return 0;
	}
	return 1;
}
int main()
{
	int n1,n2,a[100],b[100],c[200];
	cin>>n1;
	cout<<"Enter The Elements Of The First Array \n";
	for(int i=0;i<n1;i++)
	cin>>a[i];
	cout<<"Enter n2\n";
	cin>>n2;
	cout<<"Enter second array elements \n";
	for(int i=0;i<n2;i++)
	cin>>b[i];
	int i=0,j=0,k=0;
	
	while(i<n1&&j<n2)
	{
		if(b[j]>a[i])
		{
			c[k++]=a[i++];
		}
		else if(b[j]==a[i])
		{
			c[k++]=a[i++];
			j++;
		}
		else
		{
			c[k++]=b[j++];
		}
	}
	for(;i<n1;i++)
	{
		c[k++]=a[i];
	}

	for(;j<n2;j++)
	{
		c[k++]=b[j];
	}
	for(int i=0;i<k;i++)
	cout<<c[i]<<"  ";
	return 0;
	
}
