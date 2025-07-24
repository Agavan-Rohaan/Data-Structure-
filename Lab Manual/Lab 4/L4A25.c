//  25. Write a program to delete a number from a given location in an array.
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

    int position;
    printf("Enter position where you want to Delete : ");
    scanf("%d",&position);
    c=c-1 ; 
    for (int i = position ; i < c; i++)
    {
        array[i] = array[i+1] ;
    }
    
    for(int i=0 ; i< c; i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
}