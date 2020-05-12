#include<iostream>
using namespace std;
int main()
{
	char a[100],b[100];
	cin>>a>>b;
	int h[26];
	for(int i=0;i<26;i++)
	h[i]=0;
	for(int i=0;i<26;i++)
	{
		h[a[i]-97]++;
	}
	for(int i=0;b[i]!='\0';i++)
	{
		h[b[i]-97]--;
	}
	for(int i=0;i<26;i++)
	{
		if(h[i]!=0)
		{
			cout<<"NOT A PANGRAM";
			exit(0);
		}
		
	}
	cout<<"The Strings Are Pangram\n\n";
	return 0;
}
