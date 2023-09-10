#include <stdio.h>

int main()
{
	int a=100, b=200, c=30;

	int result;

	result = (a>b)?((a>c)?a:c):((b>c)?b:c);

	printf("\nGreatest of three numbers=%d\n", result);

	return 0;
		
}