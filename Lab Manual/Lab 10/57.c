// 57. Write a menu driven program to implement following operations on the singly
// linked list.
// 1 Insert a node at the front of the linked list.
// 2 Display all nodes.
// 3 Delete a first node of the linked list.
// 4 Insert a node at the end of the linked list.
// 5 Delete a last node of the linked list.
// 6 Delete a node from specified position.
// 7 count the number of nodes
// status of code : complete

#include <stdio.h>
#include <stdlib.h>

// structure of node
struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

void insertAtFront(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = value;
    newNode->link = first;
    first = newNode;
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

void deleteAtFirst()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if (first == NULL)
    {
        printf("list is empty");
    }
    else
    {
        ptr = first;
        first = first->link;
        free(ptr);
    }
}

void insertAtLast(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = first;

    
    newNode->info = value;
    newNode->link = NULL;

    if (ptr != NULL)
    {
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = newNode;
    }
    else
    {
        first = newNode;
    }
}

void deleteAtLast()
{
    if (first == NULL)
    {
        printf("List is empty\n");
    }

    else if (first->link == NULL)
    {
        free(first);
    }

    else
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        struct node *pred = (struct node *)malloc(sizeof(struct node));

        ptr = first;

        while (ptr->link != NULL)
        {
            pred = ptr;
            ptr = ptr->link;
        }

        pred->link = NULL;
        free(ptr);
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

void deleteAtSpecifiedPosition(int pos)
{
    int length = countNode(first);
    if (length < pos)
    {
        printf("Out of range");
    }
    if (pos == 1)
    {
        deleteAtFirst();
    }
    else if (pos == length)
    {
        deleteAtLast();
    }
    struct node *pre;
    struct node *ptr = first;
    int i = 1;
    while (i < pos)
    {

        pre = ptr;
        ptr = ptr->link;
        i++;
    }

    pre->link = ptr->link;
    free(ptr);
}

void main()
{
    int choice;
    int number,position;

        while (1)
    {
        printf("\n--- Linked List Operations ---\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at End\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from End\n");
        printf("5. Delete from Position\n");
        printf("6. Display List\n");
        printf("7. count the number of nodes\n");
        printf("8. for exit \n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 8){ break; }
        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &number);
                insertAtFront(number);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &number);
                insertAtLast(number);
                break;
            case 3:
                deleteAtFirst();
                break;
            case 4:
                deleteAtLast();
                break;
            case 5:
                printf("Enter position: ");
                scanf("%d", &position);
                deleteAtSpecifiedPosition(position);
                break;
            case 6:
                displayNode(first);
                break;
            case 7:
                countNode(first);
                break;    
            default:
                printf("Invalid choice.\n");
            }
    }
}