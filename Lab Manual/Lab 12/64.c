// A 64. Write a program to reverse a linked list
// status of code : complete
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

void reverseLinkedList(struct node *first)
{

    struct node *pre = NULL;
    struct node *current = first;
    struct node *next = NULL;

    while (current != NULL)
    {
        next = current->link;
        current->link = pre;
        pre = current;
        current = next;
    }
}

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

void displayNode(struct node *ptr)
{
    int c = 1;
    while (ptr != NULL)
    {
        printf("number %d = %d\n", c, ptr->info);
        c++;
        ptr = ptr->link;
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
        size--;
    }

    reverseLinkedList(first);

    displayNode(first);
}