#include<iostream>
#include<math.h>
using namespace std;
int jump(int arr[], int n, int x)
{
	int step = sqrt(n);
	int prev = 0;
	while(arr[min(step,n)-1] < x)
	{
		prev = step;
		step = step + sqrt(n);
		if(prev > n)
			return -1;
	}
	for(int i=prev;i<min(step,n);i++)
	{
		if(arr[i]==x)
			return i;
	}
	return -1;
}
int main()
{
	int n;
	cout<<"Enter Range: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements in array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x;
	cout<<"Enter element to be searched: "<<endl;
	cin>>x;
	int ans = jump(arr,n,x);
	if(ans==-1)
		cout<<"Element not present"<<endl;
	else
		cout<<"Element Present at Index "<<ans;
	return 0;
}



