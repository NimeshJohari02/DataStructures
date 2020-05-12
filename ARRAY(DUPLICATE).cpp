#include<iostream>
using namespace std;
int main()
{
	/*int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int ld=0;
	for(int i=0;i<n;i++)
	{
		if(a[i+1]==a[i]&&a[i]!=ld)
		{
			cout<<"Duplicate Is "<< a[i];
			ld=a[i];
		}
	}*/
	int n,a[100];
	cout<<"Enter Number Of Elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		int count=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j]&&a[i]!=-1)
			{
				count++;
				a[j]=-1;
			}
		}
		count>1?cout<<"DUPLICATE ELEMENT"<<a[i]<<"  found  "<<count<<"   number of times  ":cout<<"\n";
	}
}
