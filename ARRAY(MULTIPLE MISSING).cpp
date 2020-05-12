#include<iostream>
using namespace std;
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int l=a[0];
	int h=a[n-1];
	int d=a[0]-0;
	for(int i=0;i<n;i++)
	{
		if((a[i]-i)!=d)
		{
			while(d<a[i]-i)
			{
				cout<<"missing Element Is "<<(i+d)<<endl;
				d++;
			}
		}
	}

	return 0;
}
