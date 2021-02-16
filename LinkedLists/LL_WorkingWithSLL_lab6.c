#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct llist
{
    int data;
    struct llist *next;
};

typedef struct llist node;
node *head, *ptr, *new1;

void displayMenu()
{
    system("cls");
    printf("LINKED LIST OPERATIONS\n\n");
    printf("1.\tDisplay and Insert\n2.\tDelete from beginning/end\n3.\tDelete a given element\n4.\tExit\n");
    printf("\nChoice: ");
}

void displayLL()
{
    printf("\nLinkedList elements:\n");
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    getch();
}

void deleteNode()
{
    printf("1.\tDelete from beginning\n2.\tDelete from end\n");
    choice()
}

void main()
{
    char ch;
    int op;
    head = (node*)malloc(sizeof(node));
    ptr = head;
    printf("Input Initial Linked List:\n");
    printf("\nEnter data: ");
    scanf("%d",&ptr->data);
    do
    {
        printf("\nContinue LinkedList? y or n");
        ch = getch();
        switch(ch)
        {
            case 'y': {
                new1 = (node*)malloc(sizeof(node));
                ptr->next = new1;
                ptr = new1;
                printf("\nEnter data: ");
                scanf("%d",&ptr->data);
                break;
            }
            case 'n': {
                ptr->next = NULL;
                break;
            }
            default: printf("\nPlease only input 'y' or 'n'\n");break;
        }
    }while (ch!='n');
    do
    {
        displayMenu();
        scanf("%d",&op);
        switch(op)
        {
            case 1 : displayLL();break;
            case 2 : printf("");
            case 3 : printf("");
            case 4 : exit(1);
            default : system("cls");printf("Wrong Input!");
        }
    }while(op!=4);
}
