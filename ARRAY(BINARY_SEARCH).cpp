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
void append(struct array *ptr,int x)
{
	if(ptr->length<ptr->size)
	{
		ptr->a[ptr->length++]=x;
	}
	else
	{
		cout<<"ERROR ARRAY IS ALREADY FUll \n";
	}
}
int binary(struct array arr,int val)
{
	int h=arr.length;
	int l=0;
	while(h>=l)
	{
		int mid=(h+l)/2;
		if(arr.a[mid]==val)
		{
			return mid+1;
		}
		else if(arr.a[mid]>val)
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
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
	cout<<"Enter the search element"<<endl;
	cin>>search;
	cout<<binary(a1,search);
	delete a1.a;//FREE UP MEMORY TO PREVENT MEMORY LEAKS;;
	return 0;
}
