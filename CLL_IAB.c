#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct cllist
{

    int data;
    struct cllist *next;
};

typedef struct cllist node;
node *head=NULL,*ptr;

void CLL_display()
{
    node *loc;
    loc=head;
    if(ptr==NULL)
    {
        printf("Empty List\n");
        getch();
        return;
    }
    else
    {
        printf("\nCircular Linked list Elements: \n");
        do
        {
            printf("%d\t",loc->data);
            loc=loc->next;
        }while(loc!=head);
    }
    getch();
}

void CLL_iab()
{
    node *new1;
    new1=(node*)malloc(sizeof(node));
    printf("Enter data: \n");
    scanf("%d",&new1->data);
    if (head==NULL)
    {
        head=new1;
        new1->next=head;
        ptr=new1;
    }
    else
    {
        new1->next=head;
        head=new1;
    }
    ptr->next=head;
}

void main()
{
    int ch;
    do
    {
        printf("\nCircular Linked List operations\n");
        printf("1.\tInsert at Beginning\n2.\tDisplay\n3.\tExit\n");
        printf("Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:CLL_iab();break;
            case 2:CLL_display();break;
            case 3:exit(1);
            default: {
                printf("Invalid Choice!");
                break;
            }
        }
    }while(ch!=3);
}
