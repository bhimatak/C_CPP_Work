/* 

Demo on Strings
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char name1[20]="Rahul"; //;={'\0'};//="Bhima";

	char name2[]="ABCDEFGHIJKLMNOPQRST";
	int lenght;

	printf("\nName1 = %s\t\tName2=%s",name1,name2);
	//strcat(name1,name2);
	printf("\nLenght of Name1 = %d",strlen(name1));
	printf("\nSizeof of Name1 = %d",sizeof(name1));
	
	printf("\nLenght of Name2 = %d",strlen(name2));
	printf("\nsizeof of Name2 = %d",sizeof(name2));
	
	//strncat(name1,name2,5);
	//strncpy(name1,name2,5);
	strncat(name1,name2,5);
	printf("\nName1 = %s\t\tName2=%s",name1,name2);
	

	

	



	
		
	
	printf("\n\n");
	return 0;
}