#include<iostream>
#include<string.h>
using namespace std;
int ispallindrome(char a[],int n)
{
		for(int i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-1-i])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char a[100];
	cin>>a;
	int n=strlen(a);
	if(ispallindrome(a,n))
	{
		cout<<"Pallindrome hai re baba";
		
	}
	else
	{
		cout<<"NOT A PALLINDROME"<<endl;
	}
return 0;
}
