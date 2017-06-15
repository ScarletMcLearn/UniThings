#include <iostream>
#define size 13

using namespace std;

void bubbleSort(int a[])
{
	int i, j, tmp;
	
	for(i = 0; i < size; ++i)
	{
		for(j = i+1; j < size; ++j)
		{
			if(a[i] > a[j])
			{
				// swapping values
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	
		
}

int main()
{
	int arr[size];
	int i;
	
	for(i = 0; i < size; ++i)
		cin >> arr[i];
	
	bubbleSort(arr);
	
	for(i = 0; i < size; ++i)
		cout << arr[i] << ' ';
		
	return 0;
}
