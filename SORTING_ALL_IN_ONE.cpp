#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
class sort
{
	int a[100],n;
	public:
		void getdata()
		{
			cin>>n;
			for(int i=0;i<n;i++)
			cin>>a[i];
		}
		void showdata()
		{
			for(int i=0;i<n;i++)
			cout<<a[i]<<"    ";
		}
		void bubblesort(int);
		void insertionsort(int);
		void selectionsort(int);
};
void sort::insertionsort(int c=0)
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int x=a[i];
		if(c==0)
		{
		
		while(j>=0&&a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		}
		else
		{
		while(j>=0&&a[j]<x)
		{
			a[j+1]=a[j];
			j--;
		}
		}
		a[j+1]=x;
	}
}
void sort::bubblesort(int x=0)
{
			for(int p=0;p<n-1;p++)
			{
				for(int i=0;i<n-p-1;i++)
				{
					if(x==0)
					{
							
					if(a[i+1]<a[i])
					{
						int temp=a[i+1];
						a[i+1]=a[i];
						a[i]=temp;
					}
				}
				else if(x==-1)
				{
					if(a[i+1]>a[i])
					{
						int temp=a[i+1];
						a[i+1]=a[i];
						a[i]=temp;
					}
				}
				}
			}
		}

void sort::selectionsort(int x)
{
	int i,j,k;
	for(int i=0;i<n-1;i++)
	{
		for(j=k=i;j<n;j++)
		{
			if(x==0)
			{
			
			if(a[j]<a[k])
			{
				k=j;
			}
		}
		else 
		{
			if(a[j]>a[k])
			{
				k=j;
			}
		}
		}
		swap(&a[k],&a[i]);
	}
}
int main()
{
	sort s1;
	s1.getdata();
	cout<<"\nPress 0 For Ascending -1 For Descending Sort \n";
	int x;
	cin>>x;
	s1.bubblesort(x);
//	s1.insertionsort(x);
//	s1.selectionsort(x);
	s1.showdata();
}
