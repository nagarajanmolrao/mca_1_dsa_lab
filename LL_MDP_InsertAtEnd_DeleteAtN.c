#include<stdio.h>
#include<conio.h>
#include<stdlib.>

struct llist
{
    int data;
    struct llist *next;
};
typedef struct llist node;
node *head,*ptr,*new1;
int count = 0;

void countNodes()
{
    ptr = head;
    while(ptr!=NULL)
    {
        ptr = ptr->next;
        count++;
    }
}

void display_LL()
{
    head = ptr;
    while(ptr!=NULL)
    {
        printf("%d\t",&ptr_data);
        ptr = ptr->next;
    }
}

void insert_at_end()
{
    new1 = (node*)malloc(sizeof(node));
    ptr = head;
    countNodes();
    printf("Enter data: ");
    scanf("%d",&new1->data);
    new1->next = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new1;
    count++;
}

void delete_N_node()
{

}

void main()
{
    int choice;
    do
    {
        printf("\nLINKED LIST OPERATIONS\n1.\tInsert at End\n2.\tDelete Nth Node\n3.\tDisplay\n4.\tExit\n\nChoice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert_at_end();break;
            case 2: delete_N_node();break;
            case 3: display_LL();break;
            case 4: exit(1);
            default:
                {
                    printf("Invalid Choice!/n");
                    break;
                }
        }
    }while(choice!='4');
}
