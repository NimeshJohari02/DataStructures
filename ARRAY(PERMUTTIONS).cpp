#include<iostream>
using namespace std;
#include<math.h>
void perm(int a[],int k)
{
	static int b[10]={0};
	static int res[100];
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
int noofdig(int n)
{
	int i;
	for(i=0;n!=0;i++)
	{
		n=n/pow(10,i);
	}
	return i;
}
int main()
{
	int n;
	cin>>n;
	int dig=noofdig(n);
	int a[100];
	int i=0;
	while(n>0)
	{
		int q=n%10;
		a[i]=q;
		n=n/10;
		i++;
	}
//	for(int i=0;i<dig;i++)
//	{
//		cout<<a[i]<<" \t";
//	}
	perm(a,0);
	return 0;
}
