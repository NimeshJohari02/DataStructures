#include<iostream>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter String In Lower Case";
	gets(str);
	int h[26];
	for(int i=0;i<26;i++)
	h[i]=0;
	for(int i=0;str[i]!='\0';i++)
	{
		h[str[i]-97]++;
	}
	for(int i=0;i<26;i++)
	{
		if(h[i]>1)
		{
			cout<<(char)(i+97)<<"  occured   "<<h[i]<<"   times  ";
		}
	}
}
