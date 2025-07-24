// 15. WAP to print Armstrong number from 1 to 1000
// Armstrong number 153 = 1^3 + 5^3 + 3^3
//                  1634 = 1^4 + 6^4 + 3^4 + 4^4

#include <stdio.h>
void main()
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    int digit=0 ;
    int n=number;
    while (n!=0)
    {
      n=n/10;
      digit++ ;  
    }
    // printf("first digit : %d\n\n",n);
    n=number ;
    printf("number of digit : %d\n\n",digit);
    int sum=0;
    for(int i=0 ; i<digit ; i++)
    {
        int m = n%10 ;
        int multi=m ;
        for (int j = 1; j < digit; j++)
        {
            multi*=m ;
            // printf("multi = %d\n",multi);
        }
        sum+=multi ;
        n/=10 ;
    }
    if (number==sum)
    {
        printf("%d is armstrong number",number);
    }
    else{
        printf("%d is not armstrong number",number);
    }
    
    // printf("Sum = %d",sum);

}

// #include<stdio.h>
// void main()
// {
//     int n,c=0,m,sum=0;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     int number=n;
//     while (n!=0)
//     {
//         n=n/10 ;
//         c++ ;
//     }
//     printf("%d\n",c);
//     while (n!=0)
//     {

//         m=n%10;
//         int m1=1;
//         for (int i = 1; i <= c; i++)
//         {
//             m1=m1*m;
//         }
//         printf("\n%d",m1);
//         sum=sum+m1 ;
//         n=n/10;
//     }
//     printf("%d\n",sum);
//     if (number==sum)
//     {
//         printf("%d is a Armstrong number",number);
//     }
//     else
//     {
//         printf("no");
//     }
// }