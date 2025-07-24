// 26. Write a program to insert a number in an array that is already sorted in an
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
    int newNumber;
    printf("Enter new number : ");
    scanf("%d",&newNumber);

    for(int i=c ; i>=0 ; i--)
    {
        array[i] = array[i-1] ;
        if(array[i]>newNumber && array[i-2]<newNumber)
        {
            array[i-1] =newNumber ;
            break;
        }
    }
    
    for(int i=0 ; i< c+1; i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
}