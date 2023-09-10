/*

Function pointers


return_dt (*fun_ptr)(args) = &fun_name

*/

#include <stdio.h>

void display(int);

int main(int argc, char const *argv[])
{
	/* code */
	//display(10);

	void (*fun_ptr)(int) = &display;

	(*fun_ptr)(20);

	printf("\n\n");

	return 0;
}


void display(int a)
{
	printf("\nCalled by function pointer\nValue of a=%d\n",a);
}