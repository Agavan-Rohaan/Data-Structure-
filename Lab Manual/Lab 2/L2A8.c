// 8. WAP to find factorial of a number. (Using loop & recursion)
// Factorial 5!=120
#include<stdio.h>
void main()
{
    int n=5,fact=1;
    for (int i = 1;i<=n; i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}