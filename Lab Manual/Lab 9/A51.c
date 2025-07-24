// 51. WAP to calculate the sum of n numbers using Pointer
// status of code : complete

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n ;
    printf("Enter n = ");
    scanf("%d",&n);

    int *p = (int *) malloc(n*sizeof(int));

    int sum=0;
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter number %d = ",(i+1));
        scanf("%d",(p+i));
        sum += *(p+i);
    }
    printf("sum = %d",sum);
}