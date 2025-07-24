// 33. Design anagram game using array.
// • Allow a user to enter N words and store it in an array.
// • Generate a random number between 0 to N-1.
// • Based on the random number generated display the word stored at that
// index of an array and allow user to enter its anagram.
// • Check whether the word entered by the user is an anagram of displayed
// number or not and display an appropriate message.
// • Given a word A and word B. B is said to be an anagram of A if and only if
// the characters present in B is same as characters present in A,
// irrespective of their sequence. For ex: “LISTEN” == “SILENT”

// status of code : check (incomplete)




// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <time.h>
// void main(){
//     int i,j;
//     printf("Enter a number of words:- ");
//     int numOfWords;
//     scanf("%d",&numOfWords);
//     char str[numOfWords][50];
//     for(int i=0;i<numOfWords;i++){
//         printf("Enter %d word:- ",(i+1));
//         scanf("%s",&str[i]);
//     }
//     srand(time(0));
//     int randomNumber = (rand() % numOfWords);
//     printf(" %d ",randomNumber);
//     printf("Random word is = %s",str[randomNumber]);

//     printf("\n Enter Your Anagram:- ");
//     char anagram[50];
//     scanf("%s",&anagram);
   

//     int flag=0;
//     for(i=0;i<strlen(str[randomNumber]);i++){
//         for(j=0;j<strlen(anagram);j++){
//             if(str[randomNumber][i] == anagram[j]){
//                 flag=1;
//                 printf(" %c  is checked",str[randomNumber][i]);
//                 break;
//             }
//             else{
//                 flag=0;
//             }
//         }
//     }
//     printf(" %d ",flag);


//     if(flag==1){
//         printf("Anagram satisfied");
//     }
//     else{
//         printf("Not same");
//     }

// }












#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int numberOfNumber;
    printf("Enter number of name : ");
    scanf("%d", &numberOfNumber);

    char word[numberOfNumber][100];
    for (int i = 0; i < numberOfNumber; i++)
    {
        printf("Enter name %d : ", i + 1);
        scanf("%s", word[i]);
    }

    int randomNumber = rand() % numberOfNumber;

        printf(" %d ",randomNumber);
        printf("Random word is = %s \n",word[randomNumber]);

    char name[20];

    printf("Enter name : ");
    scanf("%s", name);

    if (strlen(name) != strlen(word[randomNumber]))
    {
        printf(" Not anagram");
    }

    else
    {
        for (int i = 0; i < strlen(name); i++)
        {
            int a = name[i] ;
            int b;
            for(int j =1 ; j<strlen(name) ; j++)
            {
                if(a>(int)name[i])
                {
                    
                }
            }
        }
    }
}