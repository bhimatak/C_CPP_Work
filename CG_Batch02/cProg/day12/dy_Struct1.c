/*

dy.. structure

*/
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "emp.h"


int main()
{
	EMP *e=NULL, *temp=NULL;
	int NoOfElems=0,i;
	printf("\nEnter the no of employees: ");
	scanf("%d",&NoOfElems);

	printf("\nSizeof *e = %d",sizeof(*e));
	printf("\nSizeof e = %d",sizeof(e));

	e = (EMP *)allocateEMP(NoOfElems);

	if(e == NULL)
	{
		printf("\nUnable to allocate Memory\n");
		exit(EXIT_FAILURE);
	}
	
	//temp is assigned to the BA returned by malloc
	//temp is storing the BA
	temp = e;


	inputData(e, NoOfElems);

	e = temp;

		
	display(e,NoOfElems);

	e = temp;
	free(e);
	printf("\n\n");
	return 0;
}


