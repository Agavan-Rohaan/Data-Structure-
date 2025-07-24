// 11. WAP to find factors of a given number.
#include<stdio.h>
void main()
{
    int number;
    printf("Enter number : ");
    scanf("%d",&number);
    for(int i=1 ; i<(number/2) ; i++)
    {
        if(number%i==0)
        {
            printf("%d\n",i);
        }
    }
}