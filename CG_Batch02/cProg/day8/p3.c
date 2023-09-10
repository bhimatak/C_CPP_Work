#include <stdio.h>

int func1();
int func2();


int main()
{
	printf("\nCount from function=%d",func1());
	printf("\nCount from function=%d",func1());
	//printf("\nCount from func2=%d\n",func2());
	printf("\n\n");
	return 0;
}

int func1()
{
	static int count=func2();
	int j=10;

	count+=2;

	//printf("\nCount from func2=%d\n",func2());

	return count;
}

int func2()
{
	int count=10;
	count*=20;

	return count;
}