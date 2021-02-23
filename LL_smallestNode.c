#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct llist
{
    int data;
    struct llist *next;
};

typedef struct llist node;

void main()
{
    node *ptr, *head, *new1;
    char op;
    int small;
    head = (node*)malloc(sizeof(node));
    ptr = head;
    small = ptr->data;
    do{
        printf("Enter the data\n");
        scanf("%d",&ptr->data);
        if (ptr->data < small)
            small = ptr->data;
        printf("Continue LinkedList? Y or N\n");
        op = getch();
        if (op == 'y')
        {
            new1 = (node*)malloc(sizeof(node));
            ptr->next = new1;
            ptr = new1;
        }
        else
        {
            ptr->next = NULL;
        }
    }while(op != 'n');
    system("cls");
    printf("Smallest element in the linked List: %d",small);
}

