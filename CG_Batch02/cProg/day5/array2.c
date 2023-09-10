/*
Demo on type of arrays

1) static array => size of array is known before compile time
2) dynamic array => size of the array is know at run/execution time
3) stretchable array => size of the array can be increased/decreased at rum time
4) mutable array => size of array is known between link and execution time
					the size of array is decalared in some other file. 

*/

#include <stdio.h>

int main()
{
	int arr[5];
	int i,j;
	for(i = 0,j=5;i<5;i++,j*=4)
	{
		arr[i] = j;
	}

	for(i=0;i<5;i++)
		printf(" %d",arr[i]);

	printf("\n\n");
}