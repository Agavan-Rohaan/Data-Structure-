// 69. Write a menu driven program to implement following operations on the circular
// linked list.
// • Insert a node at the front of the linked list.
// • Delete a node from specified position.
// • Insert a node at the end of the linked list.
// • Display all nodes.
// status of code : complete
// Date : 7-7-2025
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;
struct node *last = NULL;

void insertAtFirstIn_CircularLinkedlist(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = first;
    newNode->info = value;

    if (first == NULL)
    {
        first = newNode;
        newNode->link = first;
        last = newNode;
    }
    else
    {
        newNode->link = first;
        last->link = newNode;
        first = newNode;
    }
}

void deleteAt_Specified_Position(int pos)
{
    struct node *ptr = first;
    struct node *pre = first;

    if (first == NULL)
    {
        printf("linkedlist is Empty!!!");
    }
    else if (pos == 1)
    {
        while (ptr->link != first)
        {
            ptr = ptr->link;
        }
        ptr->link = first->link;
        first = first->link;
        free(pre);
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            pre = ptr;
            ptr = ptr->link;
        }

        pre->link = ptr->link;

        if (ptr->link == first)
        {
            last = pre;
        }
        free(ptr);
    }
}

void display()
{
    struct node *ptr = first;
    while (ptr->link != first)
    {
        printf("number = %d\n", ptr->info);
        ptr = ptr->link;
    }
    printf("number = %d \n", ptr->info);
}

void insertAt_Last_In_CircularLinkedlist(int value)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = value;
    if (first == NULL)
    {
        first = newNode ;
        newNode -> link = first ;
        last = newNode ;
    }
    last->link = newNode;
    newNode->link = first;
    last = newNode;
}

void main()
{
    

    while (1)
    {
        int choice;
        printf(" press 1 for Insert a node at the front of the linked list.\n press 2 for Delete a node from specified position. \n press 3 for Insert a node at the end of the linked list. \n press 4 for Display all nodes. \n press 0 for Exit \n Enter choice : ");
        scanf("%d", &choice);
        int number;
        int position;

        if(choice == 0) { break; }

        switch (choice)
        {
        case 1:
            printf("Enter number : ");
            scanf("%d", &number);
            insertAtFirstIn_CircularLinkedlist(number);
            break;

        case 2:
            
            printf("\nEnter position : ");
            scanf("%d",&position);
            deleteAt_Specified_Position(position);
            break;    

        case 3:
            printf("Enter number : ");
            scanf("%d", &number);
            insertAt_Last_In_CircularLinkedlist(number);
            break;

        case 4:
            display();
            break;

        default : 
            printf("Please enter valid choice !!!");
            break;
        }

    }
}