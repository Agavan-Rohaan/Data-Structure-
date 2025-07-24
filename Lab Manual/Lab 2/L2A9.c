// 9. WAP to find power of a number using loop
#include <stdio.h>
void main()
{
    int number, power;
    printf("Enter Number : ");
    scanf("%d", &number);
    printf("Enter Power : ");
    scanf("%d", &power);
    int m=number;
    for (int i = 1; i < power; i++)
    {
        number = number*m;
    }
    printf("%d", number);
}