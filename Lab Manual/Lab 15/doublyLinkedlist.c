#include<stdio.h>
#include<stdlib.h>

struct node {
    int info ;
    struct node *lptr;
    struct node *rptr;
};

struct node *L = NULL ;
struct node *R = NULL ;

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

void display(){
    struct node *save = L ;
    int c =1 ;
    while(save -> rptr != NULL){
        printf("Number %d = %d \n",c,save -> info);
        c++ ;
        save = save -> rptr ;
    }
    printf("Number %d = %d \n",c,save -> info);
}

void main()
{
     while (1)
    {
        int number;
        printf("Enter number (-ve for break) : ");
        scanf("%d", &number);
        if(number < 0) { break; }
        inserAtLast(number);
    }

    display();
}