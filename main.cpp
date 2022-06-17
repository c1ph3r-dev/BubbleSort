#include <iostream>

void Swap(int& x, int& y) // Function to swap two integers
{
    int z = x;
    x = y;
    y = z;
}

void BubbleSort(int* array, int size) // Function to sort an integer array using Bubble Sort algorithm
{
    bool isSorted;  // true if array is sorted
    for (int i = 0; i < size; i++)
    {
        isSorted = true; // assume array is sorted
        for (int j = 1; j < size - i; j++) // less passes as the last element is sorted
        {
            if(array[j] < array[j-1]) // Is true if the latter element is smaller than the former
            {
               Swap(array[j], array[j-1]); // swaps the elements
               isSorted = false; // if items were swapped that means array is not sorted
            }
        }
        if(isSorted)
            return; // return if array is sorted
    }
}

int main()
{
    int test[] = {1, 5, 4, 3, 2, 6, 7, 8};

    BubbleSort(test, sizeof(test)/sizeof(test[0]));
    for (int i = 0; i < 8; i++)
        std::cout << test[i] << std::endl;

    return 0;
}