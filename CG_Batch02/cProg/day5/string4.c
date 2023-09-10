#include <stdio.h>
#include<string.h>

int main()
{
	char name[20]="Rahul Kumar";

	int i;

	for(i=0;name[i]!=' ';i++)
		printf("%c",name[i]);

	printf("\n\n");
	return 0;
}