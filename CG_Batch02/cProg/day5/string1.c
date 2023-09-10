/* 

Demo on Strings
*/

#include <stdio.h>

int main()
{
	char ch[6]={'R','a','h','u','l','\0'};

	char name[6] = "Rahul1";

	int i;

	for(i=0;i<10;i++)
	{
		printf("\n Address of ch[%d] = %u and value => %c = %d",i,&ch[i],ch[i],ch[i]);
	}
	printf("\n=====Name=====\n");

	for(i=0;i<10;i++)
	{
		printf("\n Address of name[%d] = %u and value => %c = %d",i,&name[i],name[i],name[i]);
	}

	printf("\nch => %s",&ch[0]);
	printf("\nname => %s",name);
	
	printf("\n\n");
	return 0;
}