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
	int n, search, pos;
	char ch;
	node *ptr, *head, *new1;
	head = (node*) malloc(sizeof(node));
	ptr = head;
	system("cls");
	do
	{
		printf("\nEnter data: ");
		scanf("%d",&ptr->data);
		printf("\nContinue LinkedList? y or n");
		ch = getch();
		if ( ch == 'y')
		{
			new1 = (node*)malloc(sizeof(node));
			ptr->next = new1;
			ptr = new1;
		}
		else
		{
			ptr->next = NULL;
		}
	}while(ch!='n');

	system("cls");
	printf("Enter Search element: ");
	scanf("%d",&search);
	ptr = head;
	pos = 1;
	while( ptr!=NULL )
	{
		if ( ptr->data == search)
			break;
		else
		{
			ptr = ptr->next;
			pos++;
		}
	}

	if (ptr == NULL)
	{
		printf("Element not found!");
	}
	else
	{
		printf("\nElement %d found at %d position", search, pos);
	}
	getch();
}

