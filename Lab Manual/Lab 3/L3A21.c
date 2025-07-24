// 21. Read n numbers in an array then read two different numbers, replace 1st
// number with 2nd number in an array and print its index and final array.

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

    int n, m;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter m : ");
    scanf("%d", &m);
    int tempN,tempN_index,tempM,tempM_index;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==n)
        {
            tempN = arr[i];
            tempN_index = i ;
        }
        else if(arr[i]==m)
        {
            tempM = arr[i];
            tempM_index = i ;
        }
    }
    arr[tempN_index] = tempM ;
    arr[tempM_index] = tempN ;

    printf("After : \n\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
    
    
}