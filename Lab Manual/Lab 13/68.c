// 68. Write a program to swap two consecutive nodes in the linked list. Don’t change
// the values of nodes, implement by changing the link of the nodes.
// • Input: 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8
// • Output: 2 → 1 → 4 → 3 → 6 → 5 → 8 → 7
// status of code : incompelete
#include<stdio.h>
#include<stdlib.h>


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
}