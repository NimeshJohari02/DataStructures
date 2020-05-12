#include<iostream>
using namespace std;
class DM
{
int a[100],n;
public:
void getdiag()
{
	cout<<"Enter The Number Of Diagonal Elements\n\n";
	cin>>n;
	cout<<"Enter The Elements Of The Array";
	for(int i=0;i<n;i++)
	cin>>a[i];
}	
void showdiag(int r,int c)
{
	if(r!=c)
	{
		cout<<0;;
	}
	else
	{
		cout<<a[r];
	}
}
};
int main()
{
	DM o1;
	int r,c;
	o1.getdiag();
	cout<<"Enter R And C for the element you want to retrieve (STARTS FROM 0) \n";
	cin>>r>>c;
	o1.showdiag(r,c);
	return 0;
}
