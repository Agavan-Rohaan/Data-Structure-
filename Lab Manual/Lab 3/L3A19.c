// 19. Write a program to find position of the smallest number & the largest number
// from given n numbers.

#include <stdio.h>
void main()
{
    int size;
    printf("Enter size of an array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter value of array[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int small = 0, smallIndex, large, largeIndex;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            small = arr[i];
            smallIndex = i;
        }
        else if (arr[i] > arr[i + 1])
        {
            large = arr[i];
            largeIndex = i;
        }
    }

    printf("smallest number : %d\n", small);
    printf("smallest number index : %d\n", smallIndex);

    printf("Largest number : %d\n", large);
    printf("Largest number index : %d\n", largeIndex);
}