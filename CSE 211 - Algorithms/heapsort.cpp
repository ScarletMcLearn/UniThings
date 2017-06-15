#include <iostream>
#define size 7

using namespace std;

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a; *a = *b; *b = temp;
}

void maxHeapify(int *A, int i, int hs)
{
	int l, r, largest;
	
	l = 2*i; r = 2*i+1;
	
	if(l <= hs && A[l] >= A[i]) 
		largest = l;
	else largest = i;
	
	if(r <= hs && A[r] >= A[largest]) 
		largest = r;
		
	if(largest != i) 
	{
		swap(A+i, A+largest);
		maxHeapify(A, largest, hs);
	}
}

void buildMaxHeap(int *A)
{	
	for(int i = size/2; i > 0; --i)
		maxHeapify(A, i, size);
}

void heapSort(int *A)
{
	int i;
	
	buildMaxHeap(A);
	
	for(i = size; i > 1; --i)
	{
		swap(A+1, A+i); 
		maxHeapify(A, 1, i-1); 
		
	}
}

int main()
{
	int i;
	int A[size+1];
	
	for(i = 1; i <= size; ++i) cin >> A[i];
	
	heapSort(A);
	
	for(i = 1; i <= size; ++i) cout << A[i] << ' ';
	
	return 0;
}


