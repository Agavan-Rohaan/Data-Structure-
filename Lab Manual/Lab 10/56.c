// 56. Write a program to implement a node structure for singly linked list. Read the
// data in a node, print the node.
// status of code : complete

#include <stdio.h>
#include <stdlib.h>
void main()
{
    struct node
    {
        int number;
        struct node *next;
    };

    // int size;
    // printf("Enter size of linkedlist : ");
    // scanf("%d",&size);

    struct node *first;
    struct node *second;
    struct node *third;

    // memory allocation to node
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    //giving data to nodes 

    // struct node *tempPtr = first;
    // for(int i = 0 ; i<3 ; i++)
    // {
    //     printf("Enter number %d : ",(i+1));
    //     scanf("%d",&tempPtr -> number);
    //     tempPtr = first -> next ;
    // }


    first -> number = 5;
    first -> next = second;

    second -> number = 10;
    second -> next = third ;

    third -> number = 15;
    third -> next = NULL ;

    struct node *ptr = first ;
    while (ptr != NULL)
    {
        printf("%d\n",ptr->number);
        ptr = ptr -> next ;
    }
    
}