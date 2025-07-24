// 59. Write a program to remove the duplicates nodes from given sorted Linked List.
// • Input: 1 → 1 → 6 → 13 → 13 → 13 → 27 → 27
// • Output: 1 → 6 → 13 → 27
// status of code : incomplete (??????????) last display() can't called 
// Date :  
// I do this for unsorted linked list also !!!!!!
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *first = NULL;

void insertAtLast(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = value;
    newNode->link = NULL;
    struct node *save = first;

    if (first == NULL)
    {
        first = newNode;
    }
    else
    {
        while (save->link != NULL)
        {
            save = save->link;
        }
        save->link = newNode;
    }
}
void display()
{
    printf("hi from dispalay !!!\n");
    struct node *save = first;
    int c = 1;
    if (first == NULL)
    {
        printf("Empty !!!!!!!!!!!");
    }
    while (save != NULL)
    {
        printf("number %d = %d\n", c, save->info);
        save = save->link;
        c++;
    }
}

void deleteDuplicates()
{
    printf("Hi\n");
    if (first == NULL)
    {
        printf("Linked list is empty");
        return;
    }
    struct node *current = first;

    while (current->link != NULL)
    {
        struct node *save = current->link;
        struct node *pre = current;

        while (save != NULL)
        {
            if (current->info == save->info)
            {
                pre->link = save->link;
                free(save);
                save = pre->link;
            }
            else
            {
                pre = save;
                save = save->link;
            }
            printf("Hello\n");
        }
        printf("asfdalksjfhlakhfl\n");
        current = current->link;
    }
}

void main()
{
    while (1)
    {
        int num;
        printf("Enter number(-ve for exit) : ");
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        else
        {
            insertAtLast(num);
        }
    }

    printf("Before : \n");
    display();
    printf("\nAfter : \n");
    deleteDuplicates();
    display();
}