#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int a[],int l,int h)
{
	int pivot=a[l];
	int i=l;int j=h;
	do
	{
		do{i++;}while(pivot>=a[i]);
		do{j--;}while(a[j]>pivot);
		if(i<j)swap(&a[i],&a[j]);
	}while(j>i);
	swap(&a[l],&a[j]);
	return j;
}
void quicksort(int a[],int l,int h)
{
	if(l<h)
	{
		int p=partition(a,l,h);
		quicksort(a,l,p);
		quicksort(a,p+1,h);
	}
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	a[n]=INT32_MAX;
	quicksort(a,0,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"   ";
	}
	
	return 0;
}
