#include<iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
	//Recursive Approach For Binary Search
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
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
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
