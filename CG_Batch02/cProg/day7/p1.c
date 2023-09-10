/*

Sum of odd and even numbers in array

*/
#include <stdio.h>
#define Cap 5

int main()
{
	int a[Cap]={1,2,3,4,5};
	int sumO=0, sumE=0;
	int i;

	for(i=0;i<Cap;i++)
	{
		if((a[i] %2) == 0)
			sumE += a[i];
		else
			sumO += a[i];

	}


	printf("\nSum of Even =%d\nSum of Odd =%d\n",sumE,sumO);

	return 0;
}