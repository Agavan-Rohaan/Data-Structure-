// 16. Write a program to read and display n numbers using an array

#include<stdio.h>
void main()
{
    int n;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value of array[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter value of array[%d] = %d\n",i,arr[i]);
    }
    
    
}