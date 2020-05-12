#include<iostream>
using namespace std;
void add(int a[],int val,int index,int *n)
{
	for(int i=*n;i>=index;i--)
	{
		a[i]=a[i-1];
	}
	a[index]=val;
	++(*n);
}
int main()
{
	int n;
	cin>>n;
	int arr[50];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the Element to be inserted at and what value"<<endl;
	int val,index;
	cin>>val>>index;
	add(arr,val,index,&n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
