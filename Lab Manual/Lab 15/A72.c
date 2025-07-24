// 72. Write a menu driven program to implement following operations on the doubly
// linked list.
// • Insert a node at the front of the linked list.
// • Delete a node from specified position.
// • Insert a node at the end of the linked list. (Home Work)
// • Display all nodes. (Home Work)
// status of code : complete (Question !!!!!!!!!!!)
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

void insertAtFirst(int value)
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
        newNode->rptr = L;
        newNode->lptr = NULL;
        L->lptr = newNode;
        L = newNode;
    }
}

void deleteAtSpecifiedPosition(int position, int totalElements)
{
    struct node *pre = L;
    struct node *save = L;

    if(L == NULL){
        printf("\nEmpty!!!!!\n\n");
    }
    else if (position > totalElements || position <= 0)
    {
        printf("Out of range : \n");
        return;
    }
    else if (position == 1 && totalElements == 1)
    {
        L = NULL;
        R = NULL;
        free(save);
        free(pre);
    }
    else if (position == 1)
    {
        pre = save;
        save = save->rptr;
        save->lptr = pre;
        L = save;
        free(pre);
    }
    else
    {
        int i = 1;
        while (i < position)
        {
            pre = save;
            save = save->rptr;
            i++;
        }
        pre->rptr = save->rptr;
        save->rptr = pre; // save -> rptr na lptr ma pre aapvanu chhe????? !!!
        // last node maate delete to thay jase but then R = what ???????????
    }
}

int count()
{
    struct node *save = L;
    int c = 1;
    while (save->rptr != NULL)
    {
        c++;
        save = save->rptr;
    }
    return c;
}

void inserAtLast(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> info = value ;
    if(L == NULL){
        newNode -> lptr = NULL ;
        newNode -> rptr = NULL ;
        L = newNode ;
        R = newNode ;
    }
    else{
        R -> rptr = newNode ;
        newNode -> lptr = R ;
        R = newNode ;
        newNode -> rptr = NULL ;
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

void main()
{
    while (1)
    {
        int number, totalElements, position;
        int choice;
        printf("press 1 for Insert a node at the front of the linked list.\npress 2 for Delete a node from specified position.\npress 3 for Insert a node at the end of the linked list.\npress 4 for Display all nodes.\npress 0 for Exit\n");
        printf("Enter choice : ");
        scanf("%d", &choice);

        
        switch (choice)
        {
        case 1:
            printf("Enter number : ");
            scanf("%d", &number);
            insertAtFirst(number);
            break;

        case 2:
            totalElements = count();
            printf("Enter position : ");
            scanf("%d", &position);
            deleteAtSpecifiedPosition(position, totalElements);
            break;

        case 3:
            printf("Enter number : ");
            scanf("%d", &number);
            inserAtLast(number);
            break;    

        case 4: 
            display();
            break;
          
        case 0:
            exit(0);
                
        default:
            printf("Enter valid choice\n\n");
            break;
        }
    }
}