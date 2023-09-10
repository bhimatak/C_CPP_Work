#include <stdio.h>
#include <stdlib.h>

int main()
{
	//char name[20]={'\0'}; //static array

	char *name;
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

	printf("\n\n");

	free(name);

	return 0;
}