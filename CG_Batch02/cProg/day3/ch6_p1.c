/*

demo on looping sts


while(cond)
{
	sts;
}


*/

#include <stdio.h>

#define exp1 num%10
#define exp2 num=num/10

int main()
{
	int num = 123, sum = 0;
	int count=0;

/*
	sum = sum + exp1;
	printf("\nsum at 1st step = %d\n", sum);
	exp2;
	sum = sum + exp1;
	printf("\nsum at 2 step = %d\n", sum);
	exp2;
	sum = sum + exp1;
	printf("\nsum at 3 step = %d num=%d\n", sum, num);
	exp2;
	sum = sum + exp1;
	printf("\nsum at 4 step = %d num=%d\n", sum, num);
*/

	while(num!=0)
	{
		sum += exp1;
		exp2;
		printf("\n%d",++count);

	}
	printf("\n SUM = %d\n", sum);

	return 0;

}