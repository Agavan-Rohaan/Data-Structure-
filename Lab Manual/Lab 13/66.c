// 66. Write a program to sort elements of a linked list.
// status of code : complete
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

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

// sorting function
void sortLinkendlist(struct node *first)
{
    int temp;
    struct node *ptr = NULL;
    struct node *compare = first;
    struct node *next;

    while (compare != NULL)
    {
        temp = 0;
        ptr = NULL;
        next = compare->link; // you forget this step
        while (next != NULL)
        {
            if (compare->info > next->info)
            {
                ptr = next;
            }
            next = next->link;
        }
        if (ptr != NULL)
        {
            temp = compare->info;
            compare->info = ptr->info;
            ptr->info = temp;
        }
        compare = compare->link;
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

    printf("Before : \n");
    displayNode(first);

    sortLinkendlist(first);

    printf("After : \n");
    displayNode(first);
}