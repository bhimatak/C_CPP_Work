/*
demo on Binary Search
*/

#include <stdio.h>
#include <stdlib.h>


int bSearch(int [], int,int,int);

int main()
{
	int arr[] = {1,4,7,9,17,43,78,85};
	int size = sizeof(arr)/sizeof(arr[0]);
	int ele = 90;

	int ifound=0;

	ifound = bSearch(arr,0,size-1,ele);

	if(ifound == -1)
		printf("\nElement is not found\n");
	else
		printf("\nElement found at index: %d",ifound);

	printf("\n\n");
	return 0;
}


int bSearch(int a[], int sindex, int eindex, int ele)
{
	int mid=0;
	if(eindex >= sindex)
	{
		mid = sindex+(eindex-sindex)/2;

		if(a[mid] == ele)
			return mid;
		else if(ele < a[mid])
			return (bSearch(a,sindex,mid-1,ele));
		else
			return(bSearch(a,mid+1,eindex,ele));


	}
	return -1;
}