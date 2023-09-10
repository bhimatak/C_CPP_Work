/* 

demo on pointers

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int a=10;
	int *ptr,*temp;

/*
	ptr = a;


	printf("\nBA of A=%u",a);
	printf("\nContent of ptr=%u",ptr);

	printf("\n");
	for(i=0;i<3;i++)
		printf("%d ",*(ptr+i));

*/
	//ptr = &a; //ptr = address
	ptr = (int *)malloc(sizeof(int)*-1);//=>BA from malloc and assigned to ptr
	if(ptr == NULL)
	{
		printf("\nError in allocation ");
		exit(1);
	}
	temp = ptr;

	*ptr = 20;
	ptr++;
	*ptr = 21;
	ptr++;
	*ptr=22;

	ptr = temp;

	printf("\n%d = %u",*(ptr),ptr);
	ptr++;
	printf("\n%d = %u",*(ptr),ptr);
	ptr++;
	printf("\n%d = %u",*(ptr),ptr);
	


	printf("\n\n");
	return 0;
}