#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct llist
{

    int data;
    struct llist *next;
};
typedef struct llist node;

void main()
{
    node *ptr, *head, *new1;
    char op = 'n';
    head = (node*) malloc(sizeof(node));
    ptr = head;
    do{
        printf("enter the data: ");
        scanf("%d",&ptr->data);
        printf("Continue LinkedList? Y or N\n");
        op = getch();
        if (op=='y')
        {
            new1 = (node*) malloc(sizeof(node));
            ptr->next = new1;
            ptr = new1;
        }
        else
        {
            ptr->next = NULL;
        }
    }while(op!='n');
    system("cls");
    printf("The elements in linked list are: \n");
    ptr = head;
    while(ptr!=NULL)
    {
        printf(" %d\t",ptr->data);
        ptr = ptr->next;
    }
}
