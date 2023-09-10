/*

register storage class 

*/

#include <stdio.h>

int main()

{
	register int i;

	int a=10;
	for(i=0;i<10;i++)
		printf(" %d",i);

	printf("\n%d",a);

	printf("\n\n");
	return 0;
}