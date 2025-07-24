// 32. Read two matrices, first 3x2 and second 2x3, perform multiplication operation
// and store result in third matrix and print it.
// status of code : Complete
#include <stdio.h>
void main()
{
    int a[3][2], b[2][3], multi[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter first matrix a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter second matrix b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            multi[i][j] = 0 ;
            for (int k = 0; k < 2; k++)
            {
                multi[i][j] += a[i][k] * b[k][j];
            }
            
        }
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     int m = 1, sum = 0;
    //     for (int j = 0; j < 2; j++)
    //     {
    //         m = a[i][j] * b[j][i];
    //         sum += m;

    //     }

    //     for (int k = 0; k < 1; k++)
    //         {
    //             multi[i][k] = sum;
    //         }
    // }

    printf("multi = \n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }
}