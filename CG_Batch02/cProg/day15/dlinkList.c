/* 
demo prog on doubly linked list
*/

#include <stdio.h>

typedef struct node
{
	int val;
	struct node *prev;
	struct node *next;
}DLList;

int main()
{
	DLList n1, n2, n3, n4;
	DLList *ptr;

	//creaating nodes
	n1.val = 10;
	n1.prev = NULL;
	n1.next = NULL;

	n2.val = 20;
	n2.prev = NULL;
	n2.next = NULL;

	n3.val = 30;
	n3.prev = NULL;
	n3.next = NULL;

	//make relationship

	n1.next = &n2;
	n1.prev = NULL;

	n2.next = &n3;
	n2.prev = &n1;

	n3.next = NULL;
	n3.prev = &n2;

	//traverse

	ptr = &n1;
	printf("Head->");
	printf("%d->",ptr->val);

	ptr = ptr->next;

	printf("%d->",ptr->val);

	
	ptr = ptr->next;
	printf("%d->",ptr->val);

	//ptr = ptr->next;
	if(ptr->next == NULL)
		printf("NULL");
	
	//printf("NULL");

	printf("\nTraverse back\n");

	printf("%d->",ptr->val);
	ptr = ptr->prev;
	
	printf("%d->",ptr->val);

	ptr = ptr->prev;

	printf("%d->",ptr->val);

	if(ptr->prev == NULL)
		printf("Head");


	

	printf("\n\n");
	return 0;

}