#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cin>>a;
	long int h=0,x=0;
	for(int i=0;a[i]!='\0';i++)
	{
		x=1;
		x=x<<a[i]-97;
		if((x&h)>0)
		{
			cout<<"Duplicate Element Found   "<<a[i]<<"   IS THE DUPLICATE \n";
		}
		else
		{
			h=h|x;
		}
	}
	return 0;
}
