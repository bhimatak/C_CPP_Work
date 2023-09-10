/*
program for linked list

nn = 2000
head = nn // nn->10, nn->next=>3000->next->null
temp =nn  // nn->10, nn->next=>3000->next
nn = 3000;
temp->next = 3000= nn;
temp = temp->next; ===i am point to 2 node
nn = 4000



*/
#include <stdio.h>
#include<stdlib.h>

typedef struct llist
{
	int val;
	struct llist *next;
} LList;


void dispList(LList *);

void dispListAdd(LList *head)
{
	printf("\n=====List=====\n");
	while(head != NULL)
	{
		printf("\n%d->%u nextadd->%u",head->val,head,head->next);
		head = head->next;
	}
	printf("\n\n");
}

int main()
{
	LList *newNode=NULL, *head=NULL, *temp=NULL;

	int ch=1, value;
	//printf("\nStruct size=%d",sizeof(LList));

	while(ch)
	{
		printf("\nEnter the value of the new node: ");
		scanf("%d",&value);

		newNode = (LList *)malloc(sizeof(LList));
		if(newNode == NULL)
		{
			printf("\nUnable to allocate Memory\n");
			exit(EXIT_FAILURE);
		}

		newNode->val = value;
		newNode->next = NULL;

		
		if(head == NULL)
		{
			//when the list is empty/new list
			head = newNode;
			temp = newNode;
		}
		else
		{
			temp->next = newNode;
			temp = temp->next;
		}

		printf("\nDo You want to add new node? (1/0): ");
		scanf("%d",&ch);



	}
	temp = head;
	dispList(temp);

	dispListAdd(temp);
	printf("\n\n");
	return 0;
}

void dispList(LList *head)
{
	printf("\n=====List=====\n");
	while(head != NULL)
	{
		printf("%d->",head->val);
		head = head->next;
	}
	printf("\n\n");
}