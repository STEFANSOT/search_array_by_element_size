#include <stdio.h>

int element_by_size(int *arr, int element, int size)
{
    int current_highest;
    int previous_index = 0;
    int container;
    int j = 0;
    for (int i = 0; i < element; i++)
    {
        current_highest = arr[0];
        for (j = 0; j < size - i; j++)
        {
            if (current_highest > arr[j])
            {
                arr[previous_index] = arr[j];
                arr[j] = current_highest;
                previous_index = j;
            }
            else
            {
                current_highest = arr[j];
                previous_index = j;
            }   
        }
    }
    return current_highest;
}

int main()
{
    int arr[] = {112, 2, 144444, 142222222, 3, 14, 3, 4, 55, 77, 1200, 9999};
    printf("%d", element_by_size(arr, 2, 11));
    return 0;
}
