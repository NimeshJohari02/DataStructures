#include<iostream>
#include<math.h>
// for fisrt n naturals only
using namespace std;
int main()
{
	int a[100],n;
	cout<<"ENTER EXPECTED NUMBER OF ELEMENTS \n";
	cin>>n;
	int given_sum=0;
	for(int i=0;i<n-1;i++)
	{
		cin>>a[i];
		given_sum=given_sum+a[i];
	}
	cout<<"Missing element is "<<fabs((n*(n+1)/2)-given_sum);
}
