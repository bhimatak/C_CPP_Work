/*
program for double linked list

*/
#include <stdio.h>
#include<stdlib.h>

typedef struct llist
{
	int val;
	struct llist *prev;
	struct llist *next;
} DLList;


void dispListF(DLList *);
void dispListB(DLList *);

DLList *insert_end(DLList*, DLList*);
//void sortList(LList *);



int main()
{
	DLList *newNode=NULL, *head=NULL, *temp=NULL;

	int ch=1, value;
	

	while(ch)
	{
		
		temp = insert_end(head,temp);
		if(head == NULL)
			head = temp;

		printf("\nDo You want to add new node? (1/0): ");
		scanf("%d",&ch);



	}
	temp = head;
	dispListF(temp);
	
	
	dispListB(head);
	
	printf("\n\n");
	return 0;
}

void dispListF(DLList *head)
{
	printf("\n=====List in forward direction=====\n");
	while(head != NULL)
	{
		printf("%d->",head->val);
		head = head->next;
	}
	printf("\n\n");
}


void dispListB(DLList *head)
{
	while(head->next != NULL)
		head = head->next;

	printf("\n=====List in backward direction=====\n");
	do
	{
		printf("%d->",head->val);
		head = head->prev;
	}while(head != NULL);

	printf("\n\n");
}


DLList *insert_end(DLList *head, DLList *last)
{
		DLList *newNode;
		int value;

		printf("\nEnter the value of the new node: ");
		scanf("%d",&value);

		newNode = (DLList *)malloc(sizeof(DLList));
		if(newNode == NULL)
		{
			printf("\nUnable to allocate Memory\n");
			exit(EXIT_FAILURE);
		}

		newNode->val = value;
		newNode->next = NULL;
		newNode->prev = NULL;

		
		
		if(head == NULL)
		{
			//when the list is empty/new list

			head = newNode;
			last = newNode;
			
		}
		else
		{
			last->next = newNode;
			newNode->prev = last;
			last = last->next;
			
		}
	return last;
}

/*
void sortList(LList *head)
{

	LList *temp = NULL;
	int tempVal=0;
	while(head->next != NULL)
	{
		temp = head->next;
		while(temp != NULL){
			if(head->val > temp->val)
			{
				tempVal = head->val;
				head->val = temp->val;
				temp->val = tempVal;

			}
			temp = temp->next;	
		}

		head = head->next;

	}
}
*/