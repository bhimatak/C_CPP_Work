/* demo on else if ladder 

	find a given number if present in the list
	else print not found

*/

#include <stdio.h>

int main()
{
	int a=10, b=20, c=30, d=40, e=50;
	int num;

	scanf("%d",&num);
/*
	if(num == a)
		printf("\nNumber is present in a\n");
	else if(num == b)
		printf("\nNumber is present in b\n");
	else if(num == c)
		printf("\nNumber is present in c\n");
	else if(num == d)
		printf("\nNumber is present in d\n");
	else if(num == e)
		printf("\nNumber is present in e\n");
	else
		printf("\nNumber is not found in the list\n");

	*/

	if((num>=a) && (num <=b))
		printf("\nNumber is found between a and b\n");
	else if((num > b)&&(num<=c))
		printf("\nNumber is found between c and d\n");
	
	else if(num >= d && num <=e)
		printf("\nNumber is present between d and e\n");
	else
		printf("\nNumber is not found in the list\n");

	printf("\nProgram ended\n");

	return 0;

}