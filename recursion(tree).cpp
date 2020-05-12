#include<iostream>
using namespace std;
void tree(int x)
{
	if(x>0)
	{
		cout<<x<<endl;
		tree(x-1);
		tree(x-1);
	}
}
int main()
{
	tree(3);
	return 0;
}
