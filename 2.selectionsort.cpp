#include<iostream>

using namespace std;
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
	int a[100],x,i;
	cout<<"Enter range: ";
	cin>>x;
	cout<<"Enter Elements: ";
	for(i=0;i<x;i++)
	{
	cin>>a[i];
	}
	sort(a,x);
	cout<<"Sorted Array Is: ";
	for(i=0;i<x;i++)
	{
	cout<<a[i]<<" ";
	}
	return 0;
}
