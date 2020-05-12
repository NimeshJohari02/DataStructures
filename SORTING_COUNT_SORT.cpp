#include<iostream>
using namespace std;
int main()
{
	int hi;
	int low;
	cout<<"Enter Highest Ellment Of array\n ";
	cin>>hi;
	cout<<"Enter Lowest Element";
	cin>>low;
	int h[hi];
	for(int i=0;i<hi;i++)
	h[i]=0;
	cout<<"Enter the Number of elements for array";
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		h[a[i]]++;
	}
	for(int i=0;i<hi;i++)
	{
		if(i>low)
		{
			while(h[i]!=0)
			{
			
				cout<<i<<"   ";
				h[i]--;
		}
		}
	}
	
	return 0;
	
}
