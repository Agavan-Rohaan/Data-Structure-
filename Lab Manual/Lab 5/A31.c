// 31. Read two 2x2 matrices and perform addition of matrices into third matrix and print it
// status of code : Complete

#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],sum[2][2];
    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            printf("Enter first matrix a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            printf("Enter second matrix b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum = \n\n");
    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

}