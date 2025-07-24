// 4. WAP to find the largest among the given three numbers by user.
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("Enter number 2 : ");
    scanf("%d",&num2);
    printf("Enter number 3 : ");
    scanf("%d",&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("%d is large number",num1);
        }
        else{
            printf("%d is large number",num3);

        }
    }
    else if(num2>num3)
    {
            printf("%d is large number",num2);
    }
    else{
            printf("%d is large number",num3);
    }
}