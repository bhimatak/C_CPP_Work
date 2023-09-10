/* 

demo on pointers

*/

#include <stdio.h>

int main()
{
	const int a=10;

	
	int *ptr;

	ptr = &a;


	printf("\na=%d\n",a);

	printf("\na value using ptr=%d",*ptr);
	
	*ptr = 20;

	printf("\na=%d\n",a);

	printf("\na value using ptr=%d",*ptr);
	
	//a = 20;
	
	//printf("\na=%d\n",a);

	
	


	printf("\n\n");
	return 0;
}