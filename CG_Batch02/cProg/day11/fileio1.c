/*

Demo on FILE operation

fopen, fclose, fprintf, fscanf, getc,putc, ftell, fseek

*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{

	FILE *fp;
	char ch;
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

	//fprintf(fp,"\nHello Team!\t How are you doing?\n");
	//fprintf(fp,"\nWe are doing good! How about you?\r\n");
	
	while((ch = getc(stdin))!=EOF){
		
		putc(ch, fp);
		
    }
    


	fclose(fp);



	return 0;
}
