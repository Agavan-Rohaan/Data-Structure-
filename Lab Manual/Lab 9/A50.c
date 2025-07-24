// 50. WAP to get and print the array elements using Pointer.
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
        printf("Enter array[%d] = ",i);
        scanf("%d",p+i);
    }

    for(int i=0 ; i<size ; i++)
    {
        printf("array[%d] = %d\n",i,*(p+i));
    }

    free(p);
}