#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
#include<ctype.h>
int main()
{
	char a[100];
	gets(a);
	cout<<strlen(a);
	int i=0;
	for(i=0;a[i]!='\0';i++)
	{
	}
	cout<<"LENGTH MAUNUALLY "<<i<<endl;
	for(int i=0;i<strlen(a);i++)
	{
		cout<<(char)(a[i]-32);
	}
	cout<<"\n";
	//m2
	char b[100];
	cout<<"Enter s2"<<endl;
	cin>>b;
	for(int i=0;i<strlen(b);i++)
	{
		b[i]=toupper(b[i]);
	}
	for(int i=0;i<strlen(b);i++)
	{
		cout<<b[i];
	}
	//count no of vowels app 1;

	int vc=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			vc++;
		}
	}
	cout<<vc<<endl;
	//m2
	cout<<" m2 "<<endl;
	char v[100];
	getline(cin,v);
	int g;
	for(int i=0;i<strlen(v);i++)
	{
		if(tolower(v[i])=='a'||tolower(v[i])=='e'||tolower(v[i])=='i'||tolower(v[i])=='o'||tolower(v[i])=='u')
		{
		g++;	
		}
	}
	cout<<g<<endl;
	return 0;
}
