#include<iostream>

using namespace std;
void sort(int a[],int n)
{
	int i,j,temp;
    for(i=1;i<n;i++)
    {
		temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
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
