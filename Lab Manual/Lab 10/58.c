// 58. WAP to check whether 2 singly linked lists are same or not.
// status of code : complete

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;
struct node *newFirst = NULL;

int check(struct node *ptr1, struct node *ptr2)
{

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->info != ptr2->info)
        {
            return 1;
        }

        ptr1 = ptr1->link;
        ptr2 = ptr2->link;
    }
}

int countNode(struct node *ptr)
{
    int c = 0;
    while (ptr != NULL)
    {
        c++;
        ptr = ptr->link;
    }

    return c;
}

// first input not taking
void insertAtLastForFirstLinkedList(int value)
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

void insertAtLastForSecondLinkedList(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = newFirst;

    newNode->info = value;
    newNode->link = NULL;

    if (ptr == NULL)
    {
        newFirst = newNode;
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

void main()
{
    // take input in linkedlist
    int value = 8;

    printf("Create First Linkedlist : \n");
    while (value > 0)
    {
        printf("Enter number (for exist enter negative value) : ");
        scanf("%d", &value);
        if (value > 0)
        {
            insertAtLastForFirstLinkedList(value);
        }
    }

    value = 2;
    printf("Create Second Linkedlist : \n");
    while (value > 0)
    {
        printf("Enter number (for exist enter negative value) : ");
        scanf("%d", &value);
        if (value > 0)
        {
            insertAtLastForSecondLinkedList(value);
        }
    }

    if (countNode(first) == countNode(newFirst))
    {
        int a = check(first, newFirst);

        if (a == 1)
        {
            printf("Not equal");
        }
        else
        {
            printf("Equal");
        }
    }
    else
    {
        printf("Equal");
    }
}
