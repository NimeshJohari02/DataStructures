#include<iostream>
using namespace std;
class diagonal
{
	int n,*a;
	public:
		diagonal(int n)
		{
			this->n=n;
			a=new int[n];
		}
		void getdata()
		{
			for(int i=0;i<n;i++)
			cin>>a[i];
		}
		void display()
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(i==j)
					{
						cout<<a[i]<<"  ";
					}
					else 
					cout<<0<<"  ";
				}
				cout<<endl;
			}
		}
		~diagonal()
		{
			cout<<"\n Memory Freed \n ";
		}
	
};
int main()
{
	int k;
	cin>>k;
	diagonal o1(k);
	o1.getdata();
	o1.display();
	return 0;
}
