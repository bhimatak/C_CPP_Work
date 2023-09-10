#include <stdio.h>
#include <stdlib.h>

void Sum(int,int);
void Sub(int,int);
void Mul(int,int);

int main(int argc, char const *argv[])
{
	/* code */
	/*Sum(10,20);
	Sub(20,10);
	Mul(2,3);
*/
	//int ret=0;
	void (*fun_ptr)(int,int);
/*
	int *ptr;
	int a=10;
	int b=20;

	ptr = &a;
	printf("%d",*ptr);
	ptr = &b;
	printf("%d",*ptr);
	*/

	 fun_ptr = &Sum;

	fun_ptr(10,20);

	//printf("\nRet = %d",ret);

	fun_ptr = &Sub;

	fun_ptr(30,20);


	printf("\n\n");

	return 0;
}

void Sum(int a,int b)
{
	printf("\n Sum = %d", (a+b));
	//return (40);
}

void Sub(int a,int b)
{
	printf("\n Sub = %d", (a-b));
}

void Mul(int a,int b)
{
	printf("\n Mul = %d", (a*b));
}