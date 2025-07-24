// 12. WAP to check whether a number is prime or not.
#include<stdio.h>
void main()
{
    int number;
    printf("Enter number : ");
    scanf("%d",&number);
    int c=0;
    for(int i=2 ; i<(number/2) ; i++)
    {
        if(number%i==0){
            c++;
        }
    }
    if(c==0){printf("%d is prime number",number);}
    else{printf("%d is not prime number",number);}
}