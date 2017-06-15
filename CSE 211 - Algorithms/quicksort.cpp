#include <iostream>
#define size 13

using namespace std;
 
void swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp; 
}

int partition(int *a, int start, int end)
{
	int pivot = a[end];
	
	int j = start;
	
	for(int i = start; i < end; ++i)
	{
		if(a[i] < pivot)
		{
			swap(a+i, a+j);
			++j;
		}
	}
	
	swap(a+j, a+end);
	
	return j;
}

void quickSort(int *a, int start, int end)
{
	if(start < end)
	{
		int mid = partition(a, start, end);
	
		quickSort(a, start, mid-1);
		quickSort(a, mid+1, end);
	}
}

int main()
{
	int arr[size];
	int i;
	
	for(i = 0; i < size; ++i)
		cin >> arr[i];
		
	quickSort(arr, 0, size-1);
	
	for(i = 0; i < size; ++i)
		cout << arr[i] << ' ';
	
	return 0;
}
