#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	char a[100],b[100];
	cin>>a;
	int n=strlen(a);
	for(int i=0;i<strlen(a);i++)
	{
		b[i]=a[strlen(a)-1-i];
	}
	cout<<b<<endl;
	for(int i=0;i<n/2;i++)
	{
		char t;
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	cout<<a;
	
	return 0;
}
