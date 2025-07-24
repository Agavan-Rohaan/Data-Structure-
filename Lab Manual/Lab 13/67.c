// 67. WAP to perform given operation in the linked list. There exist a Linked List. Add
// a node that contains the GCD of that two nodes between every pair adjacent
// node of Linked List.
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

int gcd(int num1, int num2)
{
    int small, large;
    if (num1 == num2)
    {
        return num1;
    }
    if (num1 > num2)
    {
        large = num1;
        small = num2;
    }
    else
    {
        large = num2;
        small = num1;
    }
    int temp = small;
    while (temp > 0)
    {
        if (large % temp == 0 && small % temp == 0)
        {
            return temp;
        }
        temp--;
    }
}

void insertGcdInBetweenTwoNode(struct node *first)
{
    struct node *pre = first;
    struct node *next = first->link;

    while (next != NULL)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->info = gcd(pre->info, next->info);
        newNode->link = next;
        pre->link = newNode;

        pre = pre->link->link; // 2 vaar jump karavu padase etale ...
        next = next->link;
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
    insertGcdInBetweenTwoNode(first);
    displayNode(first);
}