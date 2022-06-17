#include <iostream>

void Swap(int& x, int& y)
{
    int z = x;
    x = y;
    y = z;
}

void BubbleSort(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if(array[j] < array[j-1])
                Swap(array[j], array[j-1]);
        }
    }
}

int main()
{
    int test[] = {8, 7, 6, 5, 4, 3, 2, 1};

    BubbleSort(test, 8);
    for (int i = 0; i < 8; i++)
        std::cout << test[i] << std::endl;

    return 0;
}