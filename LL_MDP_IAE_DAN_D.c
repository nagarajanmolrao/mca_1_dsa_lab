#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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
    ptr=head;
    printf("\n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    getch();
}

void insert_at_end()
{
    new1=(node*)malloc(sizeof(node));
    ptr=(node*)malloc(sizeof(node));
    ptr = head;
    printf("\nEnter data: ");
    scanf("%d",&new1->data);
    new1->next = NULL;
    if(head == NULL)
    {
        head = new1;
        count++;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new1;
        count++;
    }
}

void delete_N_node()
{
    int n,i;
    node *loc,*locp;
    printf("\nEnter position: ");
    scanf("%d",&n);
    if(n>count)
    {
        printf("Invalid Position\n");
        getch();
        return;
    }
    else
    {
        loc = head;
        for (i=2;i<=n;i++)
        {
            locp = loc;
            loc = loc->next;
        }
        if ((head == loc)&&(loc->next==NULL))
        {
            head = NULL;
            free(loc);
        }
        else if((head == loc) && (loc->next != NULL))
        {
            head = head->next;
            free(loc);
        }
        else if((head!=loc) && (loc->next == NULL))
        {
            locp->next =NULL;
            free(loc);
        }
        else
        {
            locp->next = loc->next;
            free(loc);
        }
    }
    count--;
}

void main()
{
    int choice;
    do
    {
        system("cls");
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
