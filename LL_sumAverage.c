#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct llist
{
    int data;
    struct llist *next;
};

typedef struct llist node;

void main()
{
    node *ptr, *head, *new1;
    int count = 0, sum = 0;
    char op;
    head = (node*)malloc(sizeof(node));
    ptr = head;
    do{
        printf("Enter the data\n");
        scanf("%d",&ptr->data);
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
    ptr = head;
    while (ptr!= NULL)
    {
        sum = sum + ptr->data;
        ptr = ptr->next;
        count++;
    }
    system("cls");
    printf("Sum of %d nodes: %d", count, sum);
    printf("\nAverage of %d nodes: %d", count, sum/count);
}

