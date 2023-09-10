/*

demo on if, if-else, nested if else, else if ladder

*/

#include <stdio.h>

int main()
{
	int val1, val2;

	scanf("%d%d",&val1,&val2);

	printf("\nAddress of Val1 in the memory : %u value stored = %d",&val1, val1);
	printf("\nAddress of Val2 in the memory : %u value stored = %d",&val2, val2);

	printf("\nStart of checking\n");

	if(val1 > val2){
		printf("\nVal1 is biggest\n");
		printf("\nRUbi's question\n");
	}
	else
	{
		printf("\nVal2 is biggest\n");
		printf("Dinesh wants to know if else is having two sts\n");
	}
	

	printf("\nEnd of Program\n");

	return 0;
}