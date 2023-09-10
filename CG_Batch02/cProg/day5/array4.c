/*
Covering rules on array
*/

#include <stdio.h>



int main()
{
	int arr[] = {1,2,3,4,5,6}, i;
	printf(" %d",sizeof(arr)/sizeof(arr[0]));

	for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
		printf("%d ",arr[i]);


[] => *

op[] <=> *op
*op <=> op[]

&* => Nullify each other

scanf("%d",(arr+0))


	printf("\n\n");
}