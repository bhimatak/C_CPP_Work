/*
demo on Binary Search
*/

#include <stdio.h>
#include <stdlib.h>


int lSearch(int [], int,int,int);

int main()
{
	int arr[] = {1,4,7,9,17,43,78,85};
	int size = sizeof(arr)/sizeof(arr[0]);
	int ele = 78;

	int ifound=0;

	ifound = lSearch(arr,0,size-1,ele);

	if(ifound == -1)
		printf("\nElement is not found\n");
	else
		printf("\nElement found at index: %d",ifound);

	printf("\n\n");
	return 0;
}


int lSearch(int a[], int sindex, int eindex, int ele)
{
	int i=0;
	for(i=sindex;i<eindex;i++)
	{
		if(ele == a[i])
			return i;
	}
	return -1;
}