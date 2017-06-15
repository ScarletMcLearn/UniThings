#include <iostream>
//#include <array>

using namespace std;

int* sample_merge(int left_array[], int right_array[], int left_array_size, int right_array_size)
{
    int left_array_begin = 0;
    int right_array_begin = 0;
    int result_array_begin = 0;

    int left_array_end = left_array_size - 1;
    int right_array_end = right_array_size - 1;

    int num_elements = left_array_size + right_array_size;
    int * result_array = new int[num_elements];

    while (left_array_begin <= left_array_end && right_array_begin <= right_array_end)
    {
        if (left_array[left_array_begin] <= right_array[right_array_begin])
        {
            result_array[result_array_begin++] = left_array[left_array_begin++];
        }
        else if (right_array[right_array_begin] <= left_array[left_array_begin])
        {
            result_array[result_array_begin++] = right_array[right_array_begin++];
        }

    }

    while(left_array_begin <= left_array_end)
    {
        result_array[result_array_begin++] = left_array[left_array_begin++];
    }

    while (right_array_begin <= right_array_end)
    {
        result_array[result_array_begin++] = right_array[right_array_begin++];
    }

    return result_array;
};



void merge(int array[], int left_array_begin, int right_array_begin, int right_array_end)
{
    int left_array_end = right_array_begin - 1;

    int num_elements = right_array_end - left_array_begin + 1;

    int result_array[] = new int[num_elements];

    int result_array_begin = 0;

    while (left_array_begin <= left_array_end && right_array_begin <= right_array_end)
    {
        if (array[left_array_begin] <= array[right_array_begin])
        {
            result_array[result_array_begin++] = array[left_array_begin++];
        }
        else if (array[right_array_begin] <= array[left_array_begin])
        {
            result_array[result_array_begin++] = array[right_array_begin++];
        }
    }

    while (left_array_begin <= left_array_end)
    {
        result_array[result_array_begin++] = array[left_array_begin++];
    }

    while (right_array_begin <= right_array_end)
    {
        result_array[result_array_begin++] = array[right_array_begin++];
    }

    for (int i = num_elements - 1; i >= 0; i--; right_array_end--)
    {
        array[right_array_end] = result_array[i];
    }
}


void merge_sort(int array[], int left, int right)
{
    if (left < right)
    {
        int center = (left + right)/2;

        merge_sort(array, left, center);
        merge_sort(array, center+1, right);

        merge(array, left, center +1, right);
    }
}

main()
{
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};

    int * c = sample_merge(a, b, 3, 3);

    for (int i = 0; i < 6; i++) cout << c[i] << " "<<endl;

    int p[] = {5, 4, 3, 2, 1};
}
