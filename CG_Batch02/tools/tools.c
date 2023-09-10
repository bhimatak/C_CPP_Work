/*
valgrind, gcov, Cunit

sudo apt-get install valgrind

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test1()
{
	const int num_heights = 3;
	int *heights = malloc(num_heights*sizeof(*heights));
	for(int i=0;i<num_heights;i++)
	{
		heights[i] = i*i;
		printf("%d %d\n",i,heights[i]);
		
	}
	free(heights);
	
}

void test2()
{
	const int num_heights = 5;
	long long *heights = malloc(num_heights*sizeof(heights));
	for(int i=0;i<num_heights;i++)
	{
		heights[i] = 100+i;
		printf("%d %lld\n",i,heights[i]);
	}
	heights[0]=0;
	free(heights);
	
}

void test3()
{
	const int num_heights = 10;
	long long *heights = malloc(num_heights*sizeof(heights));
	for(int i=0;i<num_heights;i++)
	{
		if((heights == NULL))
		{
			heights = malloc(num_heights *sizeof(*heights));
		}
		
	}
	free(heights);
}

char *getString()
{
	char message[100]= "Hello World";
	//char *ret = message;
	return message;
}
void test4()
{
	printf("\nString: %s",getString());
}

int main()
{
	//test1();
	// test2();
	// test3();
	 test4();
	return 0;
}