// 27. Write a program to delete a number from an array that is already sorted in an
// ascending order.
// status of code : Complete
#include<stdio.h>
void main()
{
    int array[50],num=1,c=0;
    printf("enter -1  for stop : \n");
    for (int i = 0;i<50; i++)
    {
        printf("Enter Number in array[%d] : ",i);
        scanf("%d",&num);
        if(num<0){
            break;
        }
        array[i]=num;
        c++ ;
    }
    int deleteNumber;
    printf("Enter number that you want to delete : ");
    scanf("%d",&deleteNumber);
    for (int i = 0; i < c; i++)
    {
        if(array[i]==deleteNumber)
        {
            for(int j=i ; j<c ; j++)
            {
                array[j] = array[j+1];
            }
            break;
        }
    }
    printf("\n\n");
    for(int i=0 ; i< c-1; i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
}