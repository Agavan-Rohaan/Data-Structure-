#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    int power;
    struct node *link;
} node;

node *first1 = NULL;
node *first2 = NULL;

void insertAtLast(int value, int pow, struct node **first)
{
    node *newNode = (node *)malloc(sizeof(node));
    node *ptr = *first;
    newNode->info = value;
    newNode->power = pow;
    newNode->link = NULL;
    if (*first == NULL)
    {
        *first = newNode;
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

void display(struct node **first)
{
    node *ptr = *first;
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
    int size, number;
    printf("Enter size : ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter number  %d : ", i);
        scanf("%d", &number);
        insertAtLast(&first1, i, number);
    }

    printf("\n\nEnter size : ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter number  %d : ", i);
        scanf("%d", &number);
        insertAtLast(&first1, i, number);
    }

    printf("\n\n<-----1st----->\n");
    display(first1);

    printf("\n\n<-----2nd----->\n");
    display(first2);
}