// 54. WAP to check whether the string is Palindrome or not using Pointer.
// status of code : complete
// %[^\n]


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int numberOfCharacter ;
    printf("Enter number of character : ");
    scanf("%d",&numberOfCharacter);

    char *p = (char *) malloc(numberOfCharacter * (sizeof(char)));

    printf("Enter String : ");
    scanf("%s",p);

    printf("%s\n",p);


    char *start = p ;
    
    char *end  = p + strlen(p) - 1;
    int temp = 1 ;
    while(start < end){
        if(*start != *end){
            temp = 0 ;
            break;
        }
        start++ ;
        end-- ;
    }
    if(temp == 1){
        printf("The string is a palindrome.\n");
    }
    else{
        printf("The string is NOT a palindrome.\n");
    }

}