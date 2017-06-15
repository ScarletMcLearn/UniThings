#include <iostream>

using namespace std;


void BubbleSort(int A[], int n);

void swapp(int a, int b);

int main()
{
    int A[] = {5, 2, 7, 9, 1, 0};

    int n = 6;

    cout << "Before Sorting: ";

    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << endl;

    BubbleSort(A, n);



    cout << "After Sorting: ";

    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << endl;

return 0;

}

void BubbleSort(int A[], int n)
{

    // int A[] = {5, 2, 7, 9, 1, 0};
    for (int i = 1; i <= n - 1; i++)
    {
        bool flag = false;

        for (int j = 0; j <= n - i - 1; j++)
        {
            if (A[i] > A[i+1])
            {

                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
                flag = true;
            }


        }

         if (!flag)
         break;
    }
};


void swapp(int a, int b)
{
//    a = a + b;
//    b = a - b;
//    a = a - b;
    int temp = a;
    a = b;
    b = temp;
};
