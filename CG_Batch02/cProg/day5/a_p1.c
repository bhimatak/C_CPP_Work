/*
Assignment : to remove the dup.. elements in an array
*/

#include <stdio.h>

int main()
{
	int arr[30], i,j,k,Cap;
	printf("\nEnter the Capacity of the array: ");
	scanf("%d",&Cap);
	printf("\nEnter %d elements values of the array\n",Cap);
	for (int i = 0; i < Cap; ++i)
	{
		scanf("%d",&arr[i]);
	}

	//Display Elements of the array
	for (int i = 0; i < Cap; ++i)
	{
		printf("\narr[%d] = %d",i,arr[i]);
	}
	printf("\n\n");

	return 0;
}