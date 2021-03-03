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
int count=0;

void display_LL()
{
    node *ptr;
    ptr=head;
    printf("\n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    getch();
}

void LL_ian()
{
    int pos,i;
    node *new2,*loc;
    printf("Enter position: ");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("\nInvalid position!");
        return;
    }
    else
    {
        new2=(node*)malloc(sizeof(node));
        printf("\nEnter data: ");
        scanf("%d",&new2->data);
        new2->next=NULL;
        if(pos==1)
        {
            new2->next=head;
            head=new2;
        }
        else
        {
            loc=head;
            for(i=2;i<pos;i++)
            {
                loc=loc->next;
            }
            new2->next=loc->next;
            loc->next=new2;
        }
        count++;
    }
}

void main()
{
    int ch;
    char op;
    head = (node*)malloc(sizeof(node));
    node *ptr=head;
    printf("Enter initial Linked List:\n");
    printf("Enter data: ");
    scanf("%d",&ptr->data);
    count++;
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
                count++;
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
        printf("\nLinked List Operations:\n");
        printf("1.\tInsert at N\n2.\tDisplay Linked List\n3.\tExit");
        printf("\nChoice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:LL_ian();break;
            case 2:display_LL();break;
            case 3:exit(1);
            default: {
                printf("\nInvalid Choice!\n");
                break;
            }
        }
    }while(ch!=3);
}
