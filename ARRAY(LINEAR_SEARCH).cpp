#include<iostream>
using namespace std;
struct array
{
	int *a;
	int size;
	int length;
};
void display(struct array arr)
{
	cout<<"ELEMENTS ENTERED\n";
	for(int i=0;i<arr.length;i++)
	cout<<arr.a[i]<<endl;
}
int linear_search(struct array arr,int search)
{
	for(int i=0;i<arr.length;i++)
	{
		if(arr.a[i]==search)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	struct array a1;
	cout<<"Enter the size of the array"<<endl;
	cin>>a1.size;
	a1.a=new int[a1.size];
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
	int search;
	cout<<"Search Element ?"<<endl;
	cin>>search;
	linear_search(a1,search)>-1?cout<<" Found AT "<<linear_search(a1,search):cout<<" NOT FOUND ";
	return 0;
}
