/*

Demo on FILE operation

fopen, fclose, fprintf, fscanf, getc,putc, ftell, fseek

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void display(char *str, int Cap)
{
	int i;
	for(i=0;i<Cap;i++)
		printf("\nstr[%d]=%c",i,str[i]);

	printf("\n\n");

}

int main(int argc, char **argv)
{

	FILE *fp;
	char ch[2][20]={'\0'};
	int a;
	float b;
	
	if(argc !=2)
	{
		fprintf(stderr,"\nPlease pass the name of file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1],"r");
	if(fp == NULL)
	{
		fprintf(stdout,"\nUnable to open the file\n");
		exit(EXIT_FAILURE);
	}

	fscanf(fp,"%s",ch[0]);

	fscanf(fp,"%s",ch[1]);
	fscanf(fp,"%d%f",&a,&b);


	printf("\nValues scanned from file are\n");
	printf("\n%s %s %d %f",ch[0], ch[1],a,b);

	fclose(fp);


	printf("\n\n");

	return 0;
}