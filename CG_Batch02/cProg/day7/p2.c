#include <stdio.h>
#include <stdlib.h>

int main()
{
	//char name[20]; //static array

	char *name;
	int NoOfBytes;
	printf("\nEnter the number of Bytes Reqd: ");
	scanf("%d",&NoOfBytes);
	if((name = (char *)malloc(sizeof(char)*NoOfBytes)) == NULL)
	{
		printf("\nError: Unable to allocate Memory\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("\nMemory is Allocated Successfully\n");
		//exit(EXIT_SUCCESS);
	}


	scanf("%s",name);
	printf("\nName: %s",name);
	printf("\n\n");

	return 0;
}