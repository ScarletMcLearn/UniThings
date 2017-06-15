#include <iostream>

using namespace std;

main()
{
    int Array[] = {5, 4, 3, 2, 1};

for (int i = 0; i < 4; i++)
{
    for (int j = i; j < 5; j++)
    {
        if (Array[i] > Array[j])
        {
            swap(Array[i], Array[j]);
        }
    }
}

    for (int i = 0; i<5; i++) cout <<Array[i] << " ";
}
