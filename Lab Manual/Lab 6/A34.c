// A 34. Write a menu driven program to implement following operations on the Stack
// using an Array
// • PUSH, POP, DISPLAY
// • PEEP, CHANGE
// status of code : complete
// Date : 25-07-2025
//lesson : a variable can not be declare in switch case

#include <stdio.h>
int top = -1;
int stack[7];

void push(int value)
{
    if (top == sizeof(stack) / sizeof(stack[0]) - 1)
    {
        printf("STACK OVERFLOW");
        return;
    }
    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("STACK UNDERFLOW");
    }
    
    return stack[top--];
}

void displayStack()
{
    if (top == -1)
    {
        printf("STACK UNDERFLOW");
        return;
    }
    int travel = top;
    while (travel != -1)
    {
        printf("%d\n", stack[travel]);
        travel--;
    }
}

int peep(int index){
    if(index <= 0 || index - 1 > top){
        printf("\nEnter valid index\n");
        return -1;
    }
    return stack[top - index + 1] ;
}

void change(int index , int value){
    if(index <= 0 || index - 1 > top){
        printf("\nEnter valid index\n");
    }
    stack[top - index + 1] = value ;
}


void main()
{
    int number,index;
    while (1)
    {
        int choice;
        printf("\nEnter 1 for push\n");
        printf("Enter 2 for pop\n");
        printf("Enter 3 for display\n");
        printf("Enter 4 for peep\n");
        printf("Enter 5 for change\n");
        printf("Enter 0 for Exit\n");
        printf("Enter choice : ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }
        switch (choice)
        {
        case 1:

            printf("Enter Number : ");
            scanf("%d", &number);
            push(number);
            break;

        case 2:
            number = pop();
            printf("Pop Value : %d", number);
            break;

        case 3:
            displayStack();
            break;
        
        case 4 : 
            printf("Enter index : ");
            scanf("%d", &index);
            number = peep(index);
            if(number == -1){
                break;
            }
            printf("%d\n",number);     
            break;                  

        case 5 : 
            printf("Enter index : ");
            scanf("%d", &index);
            printf("Enter number : ");
            scanf("%d",&number);
            change(index , number);    
            break; 
            
        default:
            printf("Enter valid choice\n");
            break;
        }
    }
}
