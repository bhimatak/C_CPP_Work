/*

Demo on linked list

*/
#include <stdio.h>


struct list
{
	int val;
	struct list *ptr;  //self referencing pointer
};

typedef struct list LIST;

void dispList(LIST *);

int main()
{
	LIST n1,n2,n3;
	LIST *head, *temp;

	n1.val = 10;
	n1.ptr = NULL; //grounding 

	n2.val = 20;
	n2.ptr = NULL;

	n3.val = 30;
	n3.ptr = NULL;

	n1.ptr = &n2;
	n2.ptr = &n3;

	head = &n1; //BA of the linked list
	temp = head;
/*

	printf("\n%d",n1.val);
	printf("\n%d->",temp->val);

	//pn = &n2;
	//pn = n1.ptr;  //see line no 31
	temp = temp->ptr;
	
	printf("%d->",temp->val);

	//pn = &n3;
	//pn = n2.ptr;  //see line no 32
	temp = temp->ptr;
	printf("%d->",temp->val);

	temp = temp->ptr;
	//printf("\n%d",temp->val);
	printf("NULL\n");
	if (temp == NULL)
		printf("\nReached to the end of list");
*/
/*	printf("\nReprinting the list using loop\n");
	temp = head;
	while(temp != NULL)
	{
		printf("%d->",temp->val);
		temp = temp->ptr;

	}
*/
	dispList(temp);

	
	
	printf("\n\n");
	return 0;

}

void dispList(LIST *h)
{
	printf("\nLinked list is\n");
	while(h != NULL)
	{
		printf("%d->",h->val);
		h = h->ptr;
	}
	printf("NULL");
	printf("\n\n");
}