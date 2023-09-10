#include <stdio.h>
#include <stdlib.h>

int main()
{
	//char name[20]={'\0'}; //static array

	char *name;
	int *ptr;
	int NoOfBytes, i;
	printf("\nEnter the number of Bytes Reqd: ");
	scanf("%d",&NoOfBytes);
	if((name = (char *)calloc(NoOfBytes,sizeof(char))) == NULL)
	{
		printf("\nError: Unable to allocate Memory\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("\nMemory is Allocated Successfully\n");
		printf("\nSize of Name after calloc = %d %d\n",sizeof(*name),sizeof(*ptr));
		//memset(name,'A',NoOfBytes);
		//exit(EXIT_SUCCESS);
	}

	for(i=0;i<NoOfBytes;i++)
		printf("\n%u = %d =>%c",(name+i),*(name+i),*(name+i));
	printf("\n\n");

	scanf("%s",name);
	printf("\nName: %s",name);

	for(i=0;i<NoOfBytes;i++)
		printf("\n%u = %d =>%c",(name+i),*(name+i),*(name+i));

	// realloc function 2 params => 1, ptr address, new size


	name = realloc(name,NoOfBytes+20);
	if(name == NULL)
	{
		printf("\nError: Unable to allocate Memory\n");
		exit(EXIT_FAILURE);
	}
	printf("\nSize of Name after realloc = %d\n",sizeof(name));

	printf("\n========New Reallocated space =====\n");
	for(i=0;i<NoOfBytes+20;i++)
		printf("\n%u = %d =>%c",(name+i),*(name+i),*(name+i));

	printf("\n\n");

	free(name);

	return 0;
}