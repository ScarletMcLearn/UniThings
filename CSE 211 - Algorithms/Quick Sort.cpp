#include <iostream>

using namespace std;

void quick_sort(int array[], int left_index, int right_index) {
      int iter = left_index, jiter = right_index;
      int temporary_variable;
      int pivot = array[(left_index + right_index) / 2];


      while (iter <= jiter) {
            while (array[iter] < pivot)
                  iter++;
            while (array[jiter] > pivot)
                  jiter--;
            if (iter <= jiter) {
                  temporary_variable = array[iter];
                  array[iter] = array[jiter];
                  array[jiter] = temporary_variable;
                  iter++;
                  jiter--;
            }
      };

      if (left_index < jiter)
            quick_sort(array, left_index, jiter);
      if (iter < right_index)
            quick_sort(array, iter, right_index);
}


int main()
{
//    int A [];

    cout<<"Please enter number of terms followed by terms: ";

    int n;

    cin >> n;


    int A[n];

    for (int i = 0; i < n ; i++)
    {
        cin>> A[i];
    }

    quick_sort(A, 0, n-1);

    for (int i = 0; i < n; i ++)
        cout<<A[i] << " ";
}
