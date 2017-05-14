#include <iostream>

using namespace std;


void insertion_sort(int arr[], int sz);

int * dm_array(int sz);

void display(int * arr, int sz);



int main()
{
    int arr[] = {4, 2, 66, 1, 4};

    insertion_sort(arr, 5);

    display(arr, 5);

    cout<<endl;

    int * arr_2 = dm_array(5);

    display(arr_2, 5);



    return 0;
}



// S : sequence of sortable items
// N : no of items
// for i = 1 to N-1 do
//     j = i-1;
//     temp = S[i];
//     while j>=0 and S[j] > temp
//         S[j+1] = S[j];
//         j = j-1;
//     end while
//     S[j+1] = temp;
// end for


void insertion_sort(int arr[], int sz)
{
    int i, j, v;

    for (i = 1; i < sz; i++)
    {
        v = arr[i];
        j = i;

        while (j > 0 && arr[j-1] > v)
        {
            arr[j] = arr[j-1];
            j--;
        }

        arr[j] = v;
    }
}


int * dm_array(int sz)
{
    int * arr = new int[sz];

    cout<<"Please enter " << sz << " value(s) seperated by spaces: ";

    for (int iter = 0; iter < sz; iter++)
    {
        cin>> arr[iter];
    }

    return arr;
}



void display(int * arr, int  sz)
{
    for (int iter =0; iter < sz; iter++)
        cout<< arr[iter] << " ";
}
