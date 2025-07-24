// 3. WAP to determine whether the entered character is vowel or not.
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter Character : ");
    scanf("%c",&ch);
    if(ch=='A' || ch=='a' ||ch=='E' || ch=='e' ||ch=='I' || ch=='i' ||ch=='O' || ch=='o' ||ch=='U' || ch=='u')
    {
        printf("%c is vowel",ch);
    }
    else{
        printf("%c is character",ch);
    }
}