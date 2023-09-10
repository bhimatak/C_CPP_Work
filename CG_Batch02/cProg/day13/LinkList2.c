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

LList *insert_end(LList*, LList*);
void sortList(LList *);



int main()
{
	LList *newNode=NULL, *head=NULL, *temp=NULL;

	int ch=1, value;
	//printf("\nStruct size=%d",sizeof(LList));

	while(ch)
	{
		
		temp = insert_end(head,temp);
		if(head == NULL)
			head = temp;

		printf("\nDo You want to add new node? (1/0): ");
		scanf("%d",&ch);



	}
	temp = head;
	dispList(temp);
	sortList(temp);
	temp = head;
	printf("\nAfter Sorting\n");
	dispList(temp);
	
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


LList *insert_end(LList *head, LList *last)
{
		LList *newNode;
		int value;

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
			last = newNode;
			
		}
		else
		{
			last->next = newNode;
			last = last->next;
			
		}
	return last;
}

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