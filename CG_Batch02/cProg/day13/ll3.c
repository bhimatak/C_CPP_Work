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
	LIST n1,n2,n3,n4;
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

	dispList(temp);

	n4.val = 40;
	n4.ptr = NULL;

	/*//now insert n4 betwween n1 and n2

	n1.ptr = &n4;
	n4.ptr = &n2;

	temp = head;
	printf("\nAfter inserting new node n4 between n1 and n2\n");
	dispList(temp);

	*/
/*
	n4.ptr = head;
	head = &n4;
	temp = head;
	printf("\nAfter inserting new node n4 in the begining of the list\n");
	dispList(temp);
*/

	while(temp->ptr!=NULL){
		printf("\n%u = %d next add=%u",temp,temp->val,temp->ptr);
		temp = temp->ptr;
	}

	printf("\n%u = %d",&n4,n4.val);
	printf("\ntemp = %u temp->ptr=\n",temp);
	temp->ptr = &n4;
	printf("\ntemp = %u temp->ptr=\n",temp);
	
	temp = head;
	
	dispList(head);
	printf("\nafter adding new node\n");
	while(temp!=NULL){
		printf("\n%u = %d next add=%u",temp,temp->val,temp->ptr);
		temp = temp->ptr;
	}

	printf("\n%u = %d",&n4,n4.val);
	
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