#include<iostream>
using namespace std;
int duplicate(int arr[], int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i] == x)
			return x;
	}
	return -1;
}
int count(int arr[], int n, int x)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] == x)
			c++;
	}
	return c;
}
int main()
{
	int n;
	cout<<"Enter range: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x;
	cout<<"Enter Element to Find: ";
	cin>>x;
	int ans = duplicate(arr,n,x);
	int res = count(arr,n,x);
	if(ans == -1)
		cout<<"Element not present";
	else
		cout<<ans<<" is present "<<res<<" times";
	return 0;
}
