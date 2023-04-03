#include <iostream>
using namespace std;
void swap(int *a, int *b) 
{
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) 
{
  	int pivot = array[high];
  	int i = (low - 1);
  	for (int j = low; j < high; j++) 
	{
    	if (array[j] <= pivot) 
		{	
			i++;
    		swap(&array[i], &array[j]);
    	}
  	}
    swap(&array[i + 1], &array[high]);
	return (i + 1);
}
void quick_sort(int array[], int low, int high) 
{
  	if (low < high) 
	{
    	int pi = partition(array, low, high);
		quick_sort(array, low, pi - 1);
		quick_sort(array, pi + 1, high);
  	}
}
int main()
{
	int a[100],n,i;
	cout<<"Enter range: ";
	cin>>n;
	cout<<"Enter Elements: ";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	quick_sort(a,0,n-1);
	cout<<"Sorted Array Is: ";
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
	return 0;
}
