#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct cllist
{
    int data;
    struct cllist *next;
};

typedef struct cllist node;
node *head=NULL,*new1,*ptr;
int count=0;

void display_CLL()
{
    node *ptr;
    ptr=head;
    printf("\n");
    if(ptr==NULL)
    {
        printf("Empty List\n");
        return;
    }
    else
    {
        printf("Circular List Elements\n");
        do
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }while(ptr!=head);
        getch();
    }
}

void CLL_ian()
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
        loc=head;
        if(pos==1)
        {
            new2->next=head;
            loc=head;
            do
            {
                loc=loc->next;
            }while(loc->next!=head);
            head=new2;
            loc->next=head;
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
    ptr=head;
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
                ptr->next = head;
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
            case 1:CLL_ian();break;
            case 2:display_CLL();break;
            case 3:exit(1);
            default: {
                printf("\nInvalid Choice!\n");
                break;
            }
        }
    }while(ch!=3);
}
