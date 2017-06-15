#include <iostream>

using namespace std;

main()
{
    int Array[] = {5, 4, 3, 2, 1};

    for (int i = 0; i < 5 -1; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (Array[i] > Array[j])
            {
                int temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }

    for (int i = 0; i<5; i++) cout <<Array[i] << " ";
}
