#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct llist
{
    int data;
    struct llist *next;
};

typedef struct llist node;
node *head,*new1;

void display_LL()
{
    node *ptr;
    ptr=head;
    printf("\n");
    if(head==NULL)
    {
        printf("Empty Linked List!\n")
    }
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    getch();
}

void LL_del()
{
    node *new2,*loc,*locp;
    new2=(node*)malloc(sizeof(node));
    printf("Enter element: ");
    scanf("%d",&new2->data);
    loc=head;
    locp=head;
    if(head==NULL)
    {
        printf("Empty Linked List!\n");
        return;
    }
    if(loc!=NULL && loc->data==new2->data)
    {
        head=loc->next;
        free(loc);
        return;
    }
    while(loc!=NULL&&loc->data != new2->data)
    {
        locp=loc;
        loc=loc->next;
    }
    if(loc==NULL)
    {
        printf("Element not Found!");
        return;
    }
    locp->next=loc->next;
    free(loc);

}

void main()
{
    int ch;
    char op;
    head = (node*)malloc(sizeof(node));
    node *ptr=head;
    printf("Please input data only in ASCENDING ORDER!\n");
    printf("Enter initial Linked List:\n");
    printf("Enter data: ");
    scanf("%d",&ptr->data);
    do
    {
        printf("\nContinue Linked List? y or n: ");
        op=getch();
        switch(op)
        {
            case 'y':{
                new1=(node*)malloc(sizeof(node));
                ptr->next=new1;
                ptr=new1;
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
    }while (op!='n');
    system("cls");
    do
    {
        printf("\nOperations on sorted Linked List:\n");
        printf("1.\tDelete a node\n2.\tDisplay Linked List\n3.\tExit");
        printf("\nChoice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:LL_del();break;
            case 2:display_LL();break;
            case 3:exit(1);
            default: {
                printf("\nInvalid Choice!\n");
                break;
            }
        }
    }while(ch!=3);
}
