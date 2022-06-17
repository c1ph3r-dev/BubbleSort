#include <iostream>

void Swap(int& x, int& y)
{
    int z = x;
    x = y;
    y = z;
}

void BubbleSort(int* array, int size)
{
    bool isSorted;
    for (int i = 0; i < size; i++)
    {
        isSorted = true;
        for (int j = 1; j < size - i; j++)
        {
            if(array[j] < array[j-1])
            {
               Swap(array[j], array[j-1]);
               isSorted = false;
            }
        }
        if(isSorted)
            return;
    }
}

int main()
{
    int test[] = {6, 5, 4, 3, 2, 1, 7, 8};

    BubbleSort(test, sizeof(test)/sizeof(test[0]));
    for (int i = 0; i < 8; i++)
        std::cout << test[i] << std::endl;

    return 0;
}