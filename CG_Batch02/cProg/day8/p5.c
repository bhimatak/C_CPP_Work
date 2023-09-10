/*

demo on command line arguments

*/

#include <stdio.h>
#include <string.h>

//int main(int argc, char *argv[])
int main(int argc, char **argv)
{
	int i=0;
	printf("\nNo of arguments count =%d",argc);

	/*
	printf("\n1st string as argument = %s",argv[0]);
	printf("\n2 string as argument = %s",argv[1]);

	printf("\n2 string as argument and 1 char = %c",argv[1][0]);
	printf("\n2 string as argument and 2 char = %c =>%d",argv[1][1],argv[1][1]);	
	*/
	for(i=0;i<argc;i++)
		printf("\nargv[%d] = %s",i,argv[i]);

	for(i=0;i<strlen(argv[0])+1;i++)
		printf("\n%c = %d",argv[0][i],argv[0][i]);

	printf("\n\n");

	return 0;
}