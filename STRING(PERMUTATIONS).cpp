#include<iostream>
using namespace std;
void perm(char a[],int k)
{
	static int b[10]={0};
	static char res[100];
	int i=0;
	if(a[k]=='\0')
	{
		res[k]='\0';
		cout<<res<<endl;	
		
	}
	else
	{
		for(int i=0;i<a[i]!='\0';i++)
		{
			if(b[i]==0)
			{
				res[k]=a[i];
				b[i]=1;
				perm(a,k+1);
				b[i]=0;
			}
		}
	}
}
int main()
{
	char a[100];
	cin>>a;
	perm(a,0);
	return 0;
}
