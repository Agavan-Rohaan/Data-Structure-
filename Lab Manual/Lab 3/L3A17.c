// 17. Write a program to calculate sum of numbers from m to n
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
    int m, n,sum=0;
    printf("Enter starting index : ");
    scanf("%d", &m);
    printf("Enter closing index : ");
    scanf("%d", &n);

    for (int i = m; i <= n; i++)
    {
        sum+=arr[i];
    }
    printf("sum = %d",sum);

}