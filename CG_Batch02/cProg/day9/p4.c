/*

demo on function ptrs

functions are passed as arguments to another function

*/

#include <stdio.h>
#include <stdlib.h>

void func1();
void func2();
void ptrAgFunc(void (*)());

int main()
{
	ptrAgFunc(func1);
	ptrAgFunc(func2);


	return 0;
}

void ptrAgFunc(void (*fun_ptr)())
{
	fun_ptr();
}

void func1()
{
	printf("\nHello\n");

}

void func2()
{
	printf("\nWorld\n");
}