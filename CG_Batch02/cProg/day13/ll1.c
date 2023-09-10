/*

Demo on linked list

*/
#include <stdio.h>


struct list
{
	int val;
	struct list *ptr;
};

typedef struct list LIST;

int main()
{
	LIST n1,n2,n3;
	LIST *pn;

	n1.val = 10;
	n1.ptr = NULL; //grounding 

	n2.val = 20;
	n2.ptr = NULL;

	n3.val = 30;
	n3.ptr = NULL;

	n1.ptr = &n2;
	n2.ptr = &n3;

	pn = &n1;

	printf("\n%d->",pn->val);

	//pn = &n2;
	pn = n1.ptr;  //see line no 31
	
	printf("%d->",pn->val);

	//pn = &n3;
	pn = n2.ptr;  //see line no 32

	printf("%d->",pn->val);




	printf("NULL\n");
	
	printf("\n\n");
	return 0;

}