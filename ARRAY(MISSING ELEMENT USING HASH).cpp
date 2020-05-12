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
			if(h[i]==0)
			{
				cout<<i<<" is the missing element \n \n ";
			}
			if(h[i]>1)
			{
				cout<<i <<" is a duplicate element  REPEATED BY  "<<h[i]<< "  times \n \n ";
			}
		}
//		else
//		{
//			i++;
//		}
	}
	
	return 0;
	
}
