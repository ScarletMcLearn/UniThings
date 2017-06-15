#include <iostream>

using namespace std;

void insertion_sort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int value = array[i];

        int hole = i;

        while (hole > 0 && array[hole - 1] > value)
        {
            array[hole] = array[hole - 1];
            hole = hole - 1;
        }

        array[hole] = value;
    }
}

int main()
{
    int Array [] = {5, 2, 6, 1, 0};

    insertion_sort(Array, 5);

    for (int i = 0; i <5; i++)
        cout <<Array[i] << " ";


}
