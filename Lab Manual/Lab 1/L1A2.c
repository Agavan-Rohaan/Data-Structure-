// 2. WAP to find whether a number is odd or even.
#include<stdio.h>
void main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is even",number);
    }
    else{
        printf("%d is odd",number);
    }
}