/*

demo on for loop 


for(init sec; cond sec; counter)
{
	for block of sts
}




*/

#include <stdio.h>

int main()
{
	/* code */
	int i,j;

/*
	i=1;
	while(i<=10)
	{
		printf(" %d",i);
		i++;
	}
*/
	i=1;
	j=10;

	for(;;)
	{
		if((i<=10)&&(j<200))
		{	
			printf(" %d %d\n",i,j);
			i++;
			j*=2;
		}
		else
			break;
	}

	printf("\ni=%d",i);

	printf("\n\n");

	return 0;
}