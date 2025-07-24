// A 63. Write a program to copy a linked list.
// status of code : complete

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;
struct node *copyFirst = NULL;
struct node *pre = NULL;

void insertAtLastForLinkedList(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = first;

    newNode->info = value;
    newNode->link = NULL;

    if (ptr == NULL)
    {
        first = newNode;
    }
    else
    {
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = newNode;
    }
}

struct node* copyLinkedList(struct node *first , struct node *copyFirst)
{
    copyFirst = first ;
    struct node *save = first -> link ;
    struct node *nSave = copyFirst ;

    while (save != NULL)
    {
        struct node *newNode = (struct node*)malloc(sizeof(int));
        newNode = save ;
        nSave -> link = newNode;
        save = save -> link ;
        nSave = nSave -> link ; 
    }
    return copyFirst ;
}

void displayNode(struct node *ptr)
{
    printf("Hi\n");
    int c = 1;
    struct node *temp = ptr ;
    while (temp  != NULL)
    {
        printf("number %d = %d\n", c, temp->info);
        c++;
        temp = temp->link;
    }
}

void main()
{
    int size;
    printf("Enter size : ");
    scanf("%d", &size);

    // list creation
    while (size != 0)
    {
        int number;
        printf("Enter number : ");
        scanf("%d", &number);
        insertAtLastForLinkedList(number);
        size-- ;
    }

     struct node* cf = copyLinkedList(first , copyFirst);

   
    displayNode(cf);
}