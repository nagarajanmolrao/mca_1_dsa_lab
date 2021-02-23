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
    int large = 0;
    head = (node*)malloc(sizeof(node));
    ptr = head;
    do{
        printf("Enter the data\n");
        scanf("%d",&ptr->data);
        if (ptr->data > large)
            large = ptr->data;
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
    printf("Largest element in the linked List: %d",large);
}
