/* 
demo on swtich st

*/

#include <stdio.h>

int main()
{
	/* code */
	//int a=10,b=20,c=30,d=40,e=50;
	int val;

	scanf("%d",&val);

	printf("\nSearching starts\n");

	switch(val)
	{
		case 'A':
				printf("\nValue found in A\n");
				break; 
		case 'B':
				printf("\nValue found in B\n");
				break;
		case 'C':
				printf("\nValue found in C\n");
				break;
		
		default:
				printf("\nValue not found in the list\n");
				break;
		
	
	}

	printf("\nProgram Ends\n");
	return 0;
}