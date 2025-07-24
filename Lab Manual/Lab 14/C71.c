// 71. Write a program to perform addition of two polynomial equations using
// appropriate data structure.
// status of code : incomplete
// Date :
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first1 = NULL;
struct node *last1 = NULL;
struct node *first2 = NULL;
struct node *last2 = NULL;

void insertAtLast(struct node **first, struct node **last, int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = value;
    if (*first == NULL)
    {
        *first = newNode;
        newNode->link = *first;
        *last = newNode;
    }
    else
    {
        (*last) -> link = newNode;
        newNode -> link = *first;
        *last = newNode;
        // printf("number = %d \n", *first->info);
    }
}

void display(struct node *first)
{
    printf("hi");
    struct node *ptr = first;
    do
    {
        printf("number = %d\n", ptr->info);
        printf("hi");
        ptr = ptr->link;
    }while (ptr != first);
    printf("number = %d \n", first->info);
}

void main()
{
    struct node *F = NULL;
    printf("enter value for 1st linked list : \n");
    while (1)
    {
        int value;
        printf("Enter value (-ve for exit) : ");
        scanf("%d", &value);
        if (value < 0)
        {
            break;
        }
        else
        {
            insertAtLast(&first1, &last1, value);
        }
    }

    printf("\n\nenter value for 2nd linked list : \n");
    while (1)
    {
        int value;
        printf("Enter value (-ve for exit) : ");
        scanf("%d", &value);
        if (value < 0)
        {
            break;
        }
        else
        {
            insertAtLast(&first2, &last2, value);
        }
    }

    printf("\n\n<-----1st----->\n");
    display(first1);

    printf("\n\n<-----2nd----->\n");
    display(first2);
}