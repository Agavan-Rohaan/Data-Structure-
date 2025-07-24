// 28. Write a program to delete duplicate numbers from an array.
// status of code : Complete
#include <stdio.h>
void main()
{
    int array[50], num = 1, c = 0;
    printf("enter -1  for stop : \n");
    for (int i = 0; i < 50; i++)
    {
        printf("Enter Number in array[%d] : ", i);
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        array[i] = num;
        c++;
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = i + 1; j < c;)
        {
            if (array[i] == array[j])
            {
                for (int k = j; k < c - 1; k++)
                {
                    array[k] = array[k + 1];
                }
                c--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("\n\n");
    for (int i = 0; i < c; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
}