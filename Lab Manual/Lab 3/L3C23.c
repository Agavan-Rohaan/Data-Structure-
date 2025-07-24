// // 23. WAP to sort the N names in an alphabetical order.


// #include <stdio.h>
// #include <string.h>

// #define MAX_NAMES 100
// #define MAX_LENGTH 50

// int main() {
//     char names[MAX_NAMES][MAX_LENGTH], temp[MAX_LENGTH];
//     int n, i, j;
    
//     // Input number of names
//     printf("Enter number of names (max %d): ", MAX_NAMES);
//     scanf("%d", &n);
//     getchar(); // Clear newline from buffer
    
//     if (n > MAX_NAMES || n <= 0) {
//         printf("Invalid number of names!\n");
//         return 1;
//     }
    
//     // Input names
//     printf("Enter %d names:\n", n);
//     for (int i = 0; i < MAX_LENGTH; i++)
//     {
//         printf("Enter name number %d : ",i+1);
//         scanf("%s",&names[i]);
//     }
//     // for (i = 0; i < n; i++) {
//     //     fgets(names[i], MAX_LENGTH, stdin);
//     //     // Remove trailing newline if present
//     //     names[i][strcspn(names[i], "\n")] = '\0';
//     // }
    
//     // Bubble sort
//     for (i = 0; i < n-1; i++) {
//         for (j = 0; j < n-i-1; j++) {
//             if (strcmp(names[j], names[j+1]) > 0) {
//                 // Swap names
//                 strcpy(temp, names[j]);
//                 strcpy(names[j], names[j+1]);
//                 strcpy(names[j+1], temp);
//             }
//         }
//     }
    
//     // Print sorted names
//     printf("\nNames in alphabetical order:\n");
//     for (i = 0; i < n; i++) {
//         printf("%s\n", names[i]);
//     }
    
//     return 0;
// }





// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     int numberOfNames;
//     printf("Enter numbers of names : ");
//     scanf("%d",&numberOfNames);
//     char name[numberOfNames][15];

//     for (int i = 0; i < numberOfNames; i++)
//     {
//         printf("Enter name number %d : ",i+1);
//         scanf("%s",&name[i]);
//     }

//     printf("Befor : \n");
//     for (int i = 0; i < numberOfNames; i++)
//     {
//         printf("%s\n",name[i]);
//     }
    
//     char temp[15];
//     for(int i=0 ; i < numberOfNames ; i++)
//     {
//         strcpy(temp,name[i]);
//         int c=0;
//         for(int j=1 ; j<numberOfNames ; j++)
//         {
//             if(strcmp(temp,name[j]) > 0)
//             {
//                 strcpy(temp,name[j]);
//                 c=j;
//             }
//         }
//         if(c!=0)
//         {
//             strcpy(name[c],name[i]);
//             strcpy(name[i],temp);            
//         }

//     }

//     printf("After : \n");
//     for (int i = 0; i < numberOfNames; i++)
//     {
//         printf("%s\n",name[i]);
//     }
    
// }




#include <stdio.h>
#include <string.h>

void main()
{
    int numberOfNames;
    printf("Enter numbers of names: ");
    scanf("%d", &numberOfNames);
    char name[numberOfNames][15];

    for (int i = 0; i < numberOfNames; i++)
    {
        printf("Enter name number %d: ", i + 1);
        scanf("%s", name[i]);
    }

    printf("Before: \n");
    for (int i = 0; i < numberOfNames; i++)
    {
        printf("%s\n", name[i]);
    }

    // Sorting using selection sort
    char temp[15];
    for (int i = 0; i < numberOfNames - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < numberOfNames; j++)
        {
            if (strcmp(name[j], name[minIndex]) < 0)
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            strcpy(temp, name[i]);
            strcpy(name[i], name[minIndex]);
            strcpy(name[minIndex], temp);
        }
    }

    printf("After: \n");
    for (int i = 0; i < numberOfNames; i++)
    {
        printf("%s\n", name[i]);
    }
}
