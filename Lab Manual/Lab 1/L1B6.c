// 6. WAP to convert seconds into hours, minutes & seconds and print in HH:MM:SS
// [e.g. 10000 seconds mean 2:46:40 (2 Hours, 46 Minutes, 40 Seconds)].
#include<stdio.h>
void main()
{
    int second;
    printf("Enter second : ");
    scanf("%d",&second);
    int min,hr;

    hr = second/3600;
    second=second%3600;
    min=second/60;
    second=second%60;


    printf("%d : %d : %d",hr,min,second);
}