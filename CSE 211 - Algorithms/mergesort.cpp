#include <iostream>
#define S 1000
#define size 13

using namespace std;

int MERGE(int *A, int p,int q,int r)
{
	int n1, n2;
	
	n1 = q - p + 1; n2 = r - q;
	
	int L[n1+1], R[n2+1];
	
	for(int i = 0; i < n1; ++i) L[i] = A[p+i];
	for(int j = 0; j < n2; ++j) R[j] = A[q+j+1];
	
	L[n1] = S; R[n2] = S; int i = 0; int j = 0;
	
	for(int k = p; k <= r; ++k)
	{
		if(L[i] <= R[j]) { A[k] = L[i]; ++i; }
		else{ A[k] = R[j]; ++j; }
    }	
}

int MERGE_SORT(int *A,int p,int r)
{
	if(p < r)
	{
		int q = (int)(p + r)/2;
		
		MERGE_SORT(A, p, q);
		MERGE_SORT(A, q+1, r);
		
		MERGE(A, p, q, r);
	}
}



int main()
{
	int A[size];
	
	for(int i = 0; i < size; ++i) cin >> A[i];
	
	MERGE_SORT(A, 0, size-1);
	
	for(int j = 0; j < size; ++j) cout << A[j] << ' ';
	cout << endl;
	
	return 0;
}
