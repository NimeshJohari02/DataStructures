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
void insert(struct array *ptr,int value,int index)
{
	if(index>=0&&index<ptr->length)
	{
		for(int i=ptr->length;i>=index;i--)
		{
			ptr->a[i]=ptr->a[i-1];
		}
		ptr->a[index]=value;
		ptr->length=ptr->length+1;
	}
	else
	{
		cout<<"INVALID INDEX"<<endl;
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
	display(a1);
	int var1;
	cout<<"Enter the element you want to append \n";
	cin>>var1;
	append(&a1,var1);
	display(a1);
	int val,index;
	cout<<"Enter The Element You want to INSERT and at what index \n";
	cin>>val>>index;
	insert(&a1,val,index);
	display(a1);
	delete a1.a;//FREE UP MEMORY TO PREVENT MEMORY LEAKS;;
	return 0;
}
