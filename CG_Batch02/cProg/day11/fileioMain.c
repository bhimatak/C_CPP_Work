#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str1[20];
	int a;
	float b;
	FILE *fd;

	fd = fopen("log.txt","w");
	if(fd == NULL)
	{
		fprintf(stderr,"Unable to open the file");
		exit(EXIT_FAILURE);
	}

	fscanf(stdin,"%s%d%f",str1,&a,&b);
	fprintf(stdout,"\nValues scanned from stdin are printed to file\n");
	fprintf(stdout,"str1: %s\na: %d\nb: %f",str1,a,b);
	fprintf(fd,"str1: %s\na: %d\nb: %f",str1,a,b);

	printf("\n\n");

	return 0;

}