#include <iostream>

using namespace std;


void merge(int *,int, int , int );

void mergesort(int * Array, int lower_index, int higher_index);





int main()
{
    int Array[20], iter, final_array[20];
    cout<<"Please enter  the elements of your unsorted array: \n";

    for (iter = 0; iter < 5; iter++)
    {
        cin>>Array[iter];
    }

    mergesort(Array, 0, 4);

    cout<<"Your sorted array: \n";

    for (iter = 0; iter < 5; iter++)
    {
        cout<<Array[iter] << " ";
    }



    return 0;
}




void mergesort(int * Array, int lower_index, int higher_index)
{
    int mid;
    if (lower_index < higher_index)
    {
        mid=(lower_index+higher_index)/2;
        mergesort(Array,lower_index,mid);
        mergesort(Array,mid+1,higher_index);
        merge(Array,lower_index,higher_index,mid);
    }
    return;
}


void merge(int * Array, int lower_index, int higher_index, int mid)
{
    int iter, jiter, kiter, c[50];
    iter = lower_index;
    kiter = lower_index;
    jiter = mid + 1;

    while (iter <= mid && jiter <= higher_index)
    {
        if (Array[iter] < Array[jiter])
        {
            c[kiter] = Array[iter];
            kiter++;
            iter++;
        }
        else
        {
            c[kiter] = Array[jiter];
            kiter++;
            jiter++;
        }
    }

    while (iter <= mid)
    {
        c[kiter] = Array[iter];
        kiter++;
        iter++;
    }

    while (jiter <= higher_index)
    {
        c[kiter] = Array[jiter];
        kiter++;
        jiter++;
    }

    for (iter = lower_index; iter < kiter; iter++)
    {
        Array[iter] = c[iter];
    }
}
