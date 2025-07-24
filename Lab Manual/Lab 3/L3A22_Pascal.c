// 22. WAP to print Pascal triangle.
//        0C0
//     1C0    1C1
//   2C0  2C1  2C2
// nCr = n! / [r!(n-r)!]

// 1           *          
// 2         * * *        
// 3       * * * * *      
// 4     * * * * * * *    
// 5   * * * * * * * * *


#include<stdio.h>
int fact(int n);
int nCr(int n,int r);
void main()
{
    int row ;
    printf("enter number of row : ");
    scanf("%d",&row);

    for(int i=0 ; i < row ; i++)
    {
        // Spacing
        for(int j=0 ; j < row-i-1 ; j++)
        {
            printf(" ");
        }

        for(int k=0 ; k <= i ; k++)
        {
            printf("%d ",nCr(i,k));
        }

        printf("\n");
    }

}
int fact(int n)
{
    int fact=1;
    for(int i=2 ; i<=n; i++ )
    {
        fact*=i ;
    }
    return fact;
}

int nCr(int n , int r)
{
    return (fact(n))/(fact(r)*fact(n-r));
}