#include <stdio.h>
# define max 6
int Q[max];
int front=-1;
int rear=-1;

void enqueue(int element)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        Q[rear]=element;
    }
    else if((rear+1)%max==front)
    {
        printf("Queue is overflow..");
    }
    else
    {
        rear=(rear+1)%max;
        Q[rear]=element;
    }
}

int dequeue()
{
    if((front==-1) && (rear==-1))
    {
        printf("\nQueue is underflow..");
    }
 else if(front==rear)
{
   printf("\nThe dequeued element is %d", Q[front]);
   front=-1;
   rear=-1;
}
else
{
    printf("\nThe dequeued element is %d", Q[front]);
   front=(front+1)%max;
}
}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("\n Queue is empty..");
    }
    else
    {
        printf("\nElements in a Queue are :\n");
        while(i<=rear)
        {
            printf("%d\t", Q[i]);
            i=(i+1)%max;
        }
    }
}
void main()
{
    int choice=1,x;

    while(choice<4 && choice!=0)
    {
    printf("\n\n1: Insert an element");
    printf("\n2: Delete an element");
    printf("\n3: Display the element");
    printf("\n4: Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {

        case 1:
            {
                printf("Enter the element which is to be inserted: ");
                scanf("%d", &x);
                enqueue(x);
                break;
            }
        case 2: dequeue();break;
        case 3: display(); break;
        case 4: exit(1);
        default: printf("Invalid Option\n");

    }}
}
