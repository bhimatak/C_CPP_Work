#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define buflen 30

int main()
{
	char str1[buflen];
	int a;
	float b;
	FILE *fd;

	fd = fopen("log.txt","r+");
	if(fd == NULL)
	{
		fprintf(stderr,"Unable to open the file");
		exit(EXIT_FAILURE);
	}

/*
	fscanf(stdin,"%s%d%f",str1,&a,&b);
	fprintf(stdout,"\nValues scanned from stdin are printed to file\n");
	fprintf(stdout,"str1: %s\na: %d\nb: %f",str1,a,b);
	fprintf(fd,"str1: %s\na: %d\nb: %f",str1,a,b);
*/
	memset(str1,'\0',20);

	/*
	if(fgets(str1,19,fd)==NULL)
	{
		printf("\n1 EOF reached\n");
	}

	fprintf(stdout,"\n%s\n",str1);
	memset(str1,'\0',20);
	if(fgets(str1,19,fd)==NULL)
	{
		printf("\n2 EOF reached\n");
	}

	fprintf(stdout,"\n%s\n",str1);
	memset(str1,'\0',20);
	if(fgets(str1,19,fd)==NULL)
	{
		printf("\n3 EOF reached\n");
	}

	fprintf(stdout,"\n%s\n",str1);
	memset(str1,'\0',20);
	
	if(fgets(str1,19,fd)==NULL)
	{
		printf("\n4 EOF reached\n");
	}

	fprintf(stdout,"\n%s\n",str1);

	*/
	//fseek(fd,24,SEEK_SET);
	//fprintf(fd," Hanif");
	while(fgets(str1,buflen,fd)!=NULL){
		fprintf(stdout,"%s\n",str1);
		if(ftell(fd) > 50)
			fprintf(fd," Hanif");
		printf("\nFile pointer is at %ld\n",ftell(fd));
	}



	printf("\n\n");

	fclose(fd);
	return 0;

}