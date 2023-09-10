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
	char ch[2][20]={"Bhimashankar", "Takalki"};
	//display(ch,20);

	if(argc !=2)
	{
		fprintf(stderr,"\nPlease pass the name of file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1],"w");
	if(fp == NULL)
	{
		fprintf(stdout,"\nUnable to open the file\n");
		exit(EXIT_FAILURE);
	}

	fprintf(fp,"%s ",ch[0]);

	fprintf(fp,"%s ",ch[1]);

	fprintf(fp,"%d %f\n",1001,20.5);


	fclose(fp);


	printf("\n\n");

	return 0;
}