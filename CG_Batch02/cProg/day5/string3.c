/* 

Demo on Strings strstr=> takes 2 args, finds the first occurrence 
of sub string name2/str2 in name1/str1
strstr(str1, str2)
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char name1[20]="Lets c Programming";

	char name2[20]="gram";
	char changeto[] = "FOUND";

	char *ret;
	int i,j;



	ret = strstr(name1,name2);

	if(ret)
	{
		printf("\nString Found : %s\n",ret);
		/*for(i=0;ret[i]!='\0';i++)
			printf("%c",ret[i]);
		//ret[0] = 'F';
		//strcpy(ret,"FOUND");
		for(i=0;ret[i]!='\0';i++)
		{
			for(j=0;strlen(changeto);j++)
			{
				ret[i] = changeto[j];
			}
			if(j==strlen(changeto)+1)
				break;
		}
		printf("\nChanged String : %s",name1);*/
	}
	else
		printf("\nString not Found\n");

	

	printf("\n\n");
	return 0;
}