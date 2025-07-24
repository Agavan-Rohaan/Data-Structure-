// 20. Write a program to find whether the array contains a duplicate number or not

#include <stdio.h>
void main()
{
 int size,flag=0;
    printf("Enter size of an array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter value of array[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]==arr[j])
            {  

                flag=1;
                
            }
            break;
        }
        
        
    }
    if(flag==0)
    {
        printf("Duplicate number  is not exist");
    }
    else
    {
        printf("Duplicate number is exist");
    }
    
}