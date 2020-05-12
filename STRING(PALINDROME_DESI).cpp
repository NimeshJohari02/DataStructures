#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int ispallindrome(char a[],char b[])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]!=b[i])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char a[100],b[100];
	cin>>a;
	int n=strlen(a);
	for(int i=0;i<strlen(a);i++)
	{
		b[i]=a[strlen(a)-1-i];
	}
	if(ispallindrome(a,b))
	{
		cout<<"Pallindrome"<<endl;
	}
	else
	{
		cout<<"nahi hai re pallindrome";
	}
	return 0;
	
}

