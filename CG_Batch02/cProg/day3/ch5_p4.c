/* 
demo on swtich st

*/

#include <stdio.h>

int main()
{
	/* code */
	int a=10,b=20,c=30,d=40,e=50;
	int num;

	scanf("%d",&num);

	printf("\nSearching starts\n");

	switch(num)
	{
		case 10: 
		case 20:
				printf("\nNumber found in 10 or 20 case\n");
				break;
		case 30:
				printf("\nNumber found in c\n");
				break;
		default:
				printf("\nNumber not found in the list\n");
				break;

		case 40:
				printf("\nNumber found in d\n");
				break;
				printf("\nNumber found in e\n");
				break;
		
	
	}

	printf("\nProgram Ends\n");
	return 0;
}