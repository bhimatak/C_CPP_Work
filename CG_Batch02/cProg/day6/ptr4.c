/* 

demo on pointers

*/

#include <stdio.h>

int main()
{
	int a[3]={1,2,3};
	int b[2][3]={{1,2,3},{7,6,5}};
	int i,j;

	
	int *ptr;


	ptr = a;


	printf("\nBA of A=%u",a);
	printf("\nContent of ptr=%u",ptr);

	printf("\n");
	for(i=0;i<3;i++)
		printf("%d ",*(ptr+i));


	ptr = b;

	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			printf("\n%u = %d",&b[i][j],b[i][j]);

	printf("\n");
	
	for(i=0;i<2*3;i++)
		printf("\n%u = %u",ptr[i],*(ptr+i));
	
	printf("\n");
	
	

	printf("\n");


	printf("\n\n");
	return 0;
}