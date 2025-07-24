// 73. WAP to delete alternate nodes of a doubly linked list.
// status of code : complete (But Question : Yes)
// Date : 11-07-2025
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *lptr;
    struct node *rptr;
};

struct node *L = NULL;
struct node *R = NULL;

void inserAtLast(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = value;
    if (L == NULL)
    {
        newNode->lptr = NULL;
        newNode->rptr = NULL;
        L = newNode;
        R = newNode;
    }
    else
    {
        R->rptr = newNode;
        newNode->lptr = R;
        R = newNode;
        newNode->rptr = NULL;
    }
}

void display()
{
    struct node *save = L;
    int c = 1;
    while (save->rptr != NULL)
    {
        printf("Number %d = %d \n", c, save->info);
        c++;
        save = save->rptr;
    }
    printf("Number %d = %d \n", c, save->info);
}

void deleteAtOddPosition()
{
    int c = 1;
    struct node *save = L;
    struct node *pre = L;

    while (save->rptr != NULL)
    {
        if (c == 1)
        {
            struct node *temp = save->rptr;
            temp->lptr = NULL;
            L = temp;
            free(save);
        }
        else if (c % 2 != 0)
        {
            pre->rptr = save->rptr;
            save->rptr->lptr = pre;
            free(save); // save free thay jase to loop kem aagad vadhase ?????????????????????????????????
        }
        pre = save;
        save = save->rptr;
        c++;
    }
    if (c % 2 != 0)
    {
        pre->rptr = save->rptr;
        save->rptr = pre;
    }
}

void main()
{
    while (1)
    {
        int number;
        printf("Enter number (-ve for break) : ");
        scanf("%d", &number);
        if (number < 0)
        {
            break;
        }
        inserAtLast(number);
    }

    printf("Before\n");
    display();
    deleteAtOddPosition();
    printf("\nAfter\n");
    display();
}