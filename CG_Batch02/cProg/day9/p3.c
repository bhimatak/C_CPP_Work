#include <stdio.h>
#include <stdlib.h>

int Sum(int,int);
int Sub(int,int);
int Mul(int,int);

int main(int argc, char const *argv[])
{
	int ch, a,b;
	int (*fun_ptr[])(int,int) = {Sum,Sub,Mul};
	
	printf("\nEnter the values of a and b: ");
	scanf("%d%d",&a,&b);
	printf("\nEnter Choice: \n0. Sum\n1. Sub\n2. Mul\nChoice: ");
	scanf("%d",&ch);

	//Sum(a,b);
	//fun_ptr[1](a,b);=>Sub
	

	printf("\nReturn from Func ptr= %d",fun_ptr[ch](a,b));



	printf("\n\n");

	return 0;
}

int Sum(int a,int b)
{
	printf("\n Sum = %d", (a+b));
	return (a+b);
}

int Sub(int a,int b)
{
	printf("\n Sub = %d", (a-b));
	return (a-b);
}

int Mul(int a,int b)
{
	printf("\n Mul = %d", (a*b));
	return (a*b);
}