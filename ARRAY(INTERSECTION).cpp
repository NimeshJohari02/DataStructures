#include<iostream>
using namespace std;
int ispresent(int a[],int n,int val)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==val)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int a[100],b[100],c[100],i=0,j=0,k=0;
	int n1,n2;
	cout<<"n1=?";
	cin>>n1;
	cout<<"\n n2 =? \n";
	cin>>n2;
	cout<<"enter elements of 1\n";
	for(int l=0;l<n1;l++)
	{
		cin>>a[l];
	}
	cout<<"enter elements of 2 \n";
	for(int l=0;l<n2;l++)
	{
		cin>>b[l];
	}
	while(i<n1&&j<n2)
	{
		if(ispresent(b,n2,a[i]))
		{
			c[k++]=a[i];
			i++;
			j++;
		}
		else
		{
			i++;
			j++;
		}
	}
	for(int l=0;l<k;l++)
	cout<<c[l]<<"  ";
	return 0;
}
