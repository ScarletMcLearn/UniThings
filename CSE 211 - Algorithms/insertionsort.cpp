#include <iostream>
#define size 10

using namespace std;

int main()
{
	int arr[size];
	int key;
	int i, j;
	
	for(i = 0; i < size; ++i)
		cin >> arr[i];
	
	for(i = 1; i < size; ++i)
	{
		key = arr[i]; j = i - 1;
		
		while(j >= 0 && key < arr[j])
		{
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = key;
	}
	
	for(i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
		
	return 0;
}
