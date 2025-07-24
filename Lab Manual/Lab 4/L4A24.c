// 24. Write a program to insert a number at a given location in an array.
// status of code : Complete
#include<stdio.h>
void main()
{
    int array[50],num=1,c=0;
    printf("enter -1  for stop : \n");
    for (int i = 0;i<50; i++)
    {
        printf("Enter Number : ");
        scanf("%d",&num);
        if(num<0){
            break;
        }
        array[i]=num;
        c++ ;
    }

    int position,newNumber;
    printf("Enter position where you want to change : ");
    scanf("%d",&position);

    printf("Enter new number : ");
    scanf("%d",&newNumber);

    for(int i = c ; i>=0 ; i--)
    {
        if(i==position)
        {
            array[position] = newNumber ;
            break;
        }
        else
        {
            array[i] = array[i-1] ; 
        }

    }
    c++;
    
    for(int i=0 ; i< c; i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
}