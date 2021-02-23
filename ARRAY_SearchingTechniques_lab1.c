#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void linearSearch(int);
void binarySearch(int);

void main()
{
	int i, n, ch;
	printf("IMPLEMENTATION OF SEARCHING TECHNIQUES\n");
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr = (int *)malloc(sizeof(int)*n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
	int searchKey;
	printf("Enter the search Element: ");
	scanf("%d", &searchKey);
	system("cls");
	printf("IMPLEMENTATION OF SEARCHING TECHNIQUES\n");
	printf("\n1.\tLinearSearch\n2.\tBinarySearch\n3.\tExit\n");
	printf("Choose the searching technique: ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1: linearSearch(searchKey);break;
		case 2: binarySearch(searchKey);break;
		case 3: exit(1);
		default: printf("\nInvalid Choice");break;
	}
	