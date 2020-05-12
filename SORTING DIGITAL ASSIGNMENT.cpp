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
			cout<<"Enter The Number Of Elements For The Array :- \n";
			cin>>n;
			cout<<"Elements ?\n";
			for(int i=0;i<n;i++)
			{
			cout<<" Element  "<<i+1<<"  ";
			cin>>a[i];
			}
		}
		void showdata()
		{
			for(int i=0;i<n;i++)
			cout<<a[i]<<"    ";
		}
		void bubblesort();
		void insertionsort();
		void selectionsort();
		void shellsort();
};
void sort::shellsort()
{
	for(int gap=n/2;gap>=1;gap=gap/2)
	{
		for(int j=gap;j<n;j++)
		{
			for(int i=j-gap;i>=0;i=i-gap)
			{
				if(a[i]>a[i+gap])
				{
					cout<<"Since  "<<a[i]<<" > "<<a[i+gap]<<"    "<<"  Swapping \n"; 
					swap(&a[i],&a[i+gap]);
				}
			}
		}
		cout<<"PASS COMPLETED  \n\n";
		cout<<"CURRENT GAP  "<<gap<<"\n\n";
		for(int i=0;i<n;i++)
		cout<<a[i]<<"   ";
		cout<<"\n\n";
	}
}
void sort::insertionsort()
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int x=a[i];

		while(j>=0&&a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
		}
}

void sort::bubblesort()
{
		for(int p=0;p<n-1;p++)
			{
				for(int i=0;i<n-p-1;i++)
				{
						
					if(a[i+1]<a[i])
					{
						int temp=a[i+1];
						a[i+1]=a[i];
						a[i]=temp;	
					}
				}
				
			}
	}

void sort::selectionsort()
{
	int i,j,k;
	for(int i=0;i<n-1;i++)
	{
		for(j=k=i;j<n;j++)
		{
		
			if(a[j]<a[k])
			{
				k=j;
			}
		}
		swap(&a[k],&a[i]);
	}
}


int main()
{
	int ch;
	cout<<"\n==========================================\n\t\tMENU\n==========================================\n";
	cout<<"\n1.Bubble Sort\n2.Insertion Sort\n3.Selection Sort\n4.Shell Sort\n5.Exit\n";
	cin>>ch;
	while(ch!=5)
	{
	sort s1;
	s1.getdata();
	switch(ch)
	{
		case 1:
			s1.bubblesort();
			break;
		case 2:
			s1.insertionsort();
			break;	
		case 3:
			s1.selectionsort();
			break;	
		case 4:
			s1.shellsort();
			break;
		}
//	s1.showdata();
	cout<<"\n1.Bubble Sort\n2.Insertion Sort\n3.Selection Sort\n4.Shell Sort\n5.Exit\n";
	cin>>ch;		
	}
}
