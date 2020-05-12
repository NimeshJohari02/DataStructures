#include<iostream>
using namespace std;
int main()
{
	int a[6];
	for(int i=1;i<7;i++)
	{
		a[i-1]=i;
	}
	cout<<a[5];
	int *ptr;
	ptr=new int[7];
	ptr[0]=7;
	cout<<endl<<ptr[0];
	return 0;
}
