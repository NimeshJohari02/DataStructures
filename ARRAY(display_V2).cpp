#include<iostream>
using namespace std;
struct array
{
	int a[100];
	int size;
	int length;
};
void display(struct array arr)
{
	cout<<"ELEMENTS ENTERED \n ";
	for(int i=0;i<arr.length;i++)
	cout<<arr.a[i]<<endl;
}
int main()
{
	struct array a1;
	cout<<"Enter the size of the array"<<endl;
	cin>>a1.size;
	a1.length=0;
	int n;
	cout<<"How many numbers you want to enter into the array"<<endl;
	cin>>n;
	cout<<"ELEMENTS \n ";
	for(int i=0;i<n;i++)
	{
		cin>>a1.a[i];
		a1.length=a1.length+1;
	}
	display(a1);
	return 0;
}
