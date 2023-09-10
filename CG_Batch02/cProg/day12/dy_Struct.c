/*

dy.. structure

*/
#include <stdio.h>
#include<stdlib.h>
#include <string.h>


struct empDetails
{
	int id;
	int sal;
	char name[20];
};

typedef struct empDetails EMP;


int main()
{
	EMP *e=NULL, *temp=NULL;
	int NoOfElems=0,i;
	printf("\nEnter the no of employees: ");
	scanf("%d",&NoOfElems);

	printf("\nSizeof *e = %d",sizeof(*e));
	printf("\nSizeof e = %d",sizeof(e));

	e = (EMP *)malloc(NoOfElems*sizeof(*e));

	if(e == NULL)
	{
		printf("\nUnable to allocate Memory\n");
		exit(EXIT_FAILURE);
	}
	
	//temp is assigned to the BA returned by malloc
	//temp is storing the BA
	temp = e;


	for(i=0;i<NoOfElems;i++,e++)
	{
		printf("\nEnter Name of Employee: ");
		scanf("%s",e->name);
		printf("\nEnter ID of Employee: ");
		scanf("%d",&e->id);
		printf("\nEnter Salary of Employee: ");
		scanf("%d",&e->sal);
			
	}

	e = temp;

	printf("\nDisplay the Employee Details\n");
	for(i=0;i<NoOfElems;i++,e++)
	{
		printf("\nName of Employee: ");
		printf("%s",e->name);
		printf("\nID of Employee: ");
		printf("%d",e->id);
		printf("\nSalary of Employee: ");
		printf("%d",e->sal);
			
	}	


	e = temp;
	free(e);
	printf("\n\n");
	return 0;
}