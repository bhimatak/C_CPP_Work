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
	//display(ch,20);

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
	//display(ch[0],20);
	fprintf(stdout,"\nread string: %s",ch[0]);
	
    
	fscanf(fp,"%s",ch[1]);

	fprintf(stdout,"\nread string: %s",ch[1]);
	//display(ch,20);
	//ch[0]='\0';

	/*memset(ch,'\0',20);
	printf("\nAfter memset\n");
	//display(ch, 20);
	fscanf(fp,"%s",ch);

	fprintf(stdout,"\nread string: %s",ch);
	display(ch, 20);

	*/
	if(strcmp(ch[0],ch[1])==0)
	{
		printf("\nStrings are equal\n");

	}
	else
		printf("\nStrings are unequal\n");

	printf("\nString concat: %s",strcat(ch[0],ch[1]));
	fclose(fp);


	printf("\n\n");

	return 0;
}