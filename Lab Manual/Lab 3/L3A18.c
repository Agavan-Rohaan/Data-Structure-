// Write a program to calculate average of first n numbers.
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
    int n, sum = 0;
    float avg;
    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    avg = sum/n ;

    printf("avrage of first %d number is : %f",n,avg);
    
}