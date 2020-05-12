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
int remove(struct array *ptr,int index)
{
	int x=ptr->a[index];
	for(int i=index;i<(ptr->length)-1;i++)
	{
		ptr->a[i]=ptr->a[i+1];
	}
	ptr->length--;
	return x;
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
	int a4=remove(&a1,2);
	cout<<"++++++++++++++ \n "<<a4<<"++++++++++++++ \n ";
	display(a1);	
	return 0;
}
