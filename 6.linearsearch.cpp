#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main()
{
	int arr[100],x,n;
    cout<<"Enter Range: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    cout<<"Enter Element To Search: ";
    cin>>x;
    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Not Found"
        : cout << "Element is present at index " << result;
    return 0;
}
