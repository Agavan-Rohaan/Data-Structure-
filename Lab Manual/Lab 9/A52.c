// 52. WAP to find the largest element in the array using Pointer
// status of code : complete

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int size;
    printf("Enter size of an array : ");
    scanf("%d",&size);

    int *p = (int *) malloc(size * (sizeof(int)));
    for(int i=0 ; i<size ; i++)
    {
        printf("Enter array[%d] = ",(i));
        scanf("%d",(p+i));
    }

    int large = *p;

    for(int i=1 ; i<size ; i++)
    {
        if(*(p+i) > large)
        {
            large = *(p+i) ;
        }
    }

    printf("Largest number : %d",large);
    
    free(p);
}