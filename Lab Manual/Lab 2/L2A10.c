// 10. WAP to reverse a number.
#include<stdio.h>
void main()
{
    int number;
    printf("Enter number : ");
    scanf("%d",&number);
    int rem=0,m;
    while (number!=0)
    {
        m=number%10;
        
        rem= m + rem*10;
        number=number/10;
    }
    printf("%d",rem);
}