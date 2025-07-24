// 7. WAP to convert number of days into year, week & days [e.g. 375 days mean 1
// year, 1 week and 3 days].
#include<stdio.h>
void main()
{
    int day,week,year;
    printf("Enter number of days : ");
    scanf("%d",&day);
    year=day/365;
    day=day%365;
    week=day/7;
    day=day%7;
    printf("%d year %d week %d days",year,week,day);
}