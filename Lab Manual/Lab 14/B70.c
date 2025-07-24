// B 70. WAP to split a circular linked list into two halves.
// status of code : complete
// Date : 12-07-2025
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;
struct node *last = NULL;
struct node *newFirst = NULL;
struct node *newLast = NULL;

void insertAt_Last_In_CircularLinkedlist(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = value;
    if (first == NULL)
    {
        first = newNode;
        newNode->link = first;
        last = newNode;
    }
    else
    {
        last->link = newNode;
        newNode->link = first;
        last = newNode;
    }
}

void display(struct node *F)
{
    struct node *ptr = F;
    while (ptr->link != F)
    {
        printf("number = %d\n", ptr->info);
        ptr = ptr->link;
    }
    printf("number = %d \n", ptr->info);
}

void halvesOfCircularLinkedlist(struct node *F){
    struct node *save = F ;
    int c = 1 ;
    while(save -> link != F){
        save = save -> link ;
        c++ ;
    }
    if(c==1){printf("linked list can't divied bcz it has only one node\n"); 
        return ; 
    }
    // printf("\n c = %d \n",c);
    int half = c/2 ;
    // printf("\n half = %d \n",half);
    save = F ;
    for(int i=1 ; i<half ; i++){
        save = save -> link ;
    }
    last -> link = save -> link ;
    newFirst = save -> link ;
    save -> link = F ;
    newLast = save ;

    printf("\nAfter dividing : \n");
    printf("Linkedlist 1 : \n");
    display(first);
    printf("Linkedlist 2 : \n");
    display(newFirst);    

}

void main()
{
    
    while (1)
    {
        int number;
        printf("Enter number (-ve for break) : ");
        scanf("%d", &number);
        if(number < 0) { break; }
        insertAt_Last_In_CircularLinkedlist(number);
    }

    printf("your linked list : \n");
    display(first);

    halvesOfCircularLinkedlist(first);    
}