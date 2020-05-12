#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter No of elements of first array\n\n";
	cin>>m;
	cout<<"Enter No of elements of Second array\n\n";
	cin>>n;
	int a[m],b[n],c[m+n];
	cout<<"Enter  elements of first array In sorted order \n\n";
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter  elements of second array in sorted order \n\n";	
	for(int j=0;j<n;j++)
	{
		cin>>b[j];
	}
	int i=0,j=0,k=0;
	while(i<m&&j<n)
	{
		if(b[j]>a[i])
		{
			c[k++]=a[i++];
		}
		else
		{
			c[k++]=b[j++];
		}
	}
	for(;i<m;i++)
	{
		c[k++]=a[i];
	}
	for(;j<n;j++)
	{
		c[k++]=b[j];
	}
	cout<<"\n \n ====================== \n \n ";
	for(int l=0;l<m+n;l++)
	{
		cout<<c[l]<<endl;
	}
	return 0;
}
