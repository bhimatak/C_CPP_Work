/* 

demo on pointers

*/

#include <stdio.h>

int main()
{
	int a=10;
	char ch[4]="Bhi";
	int *ptr;

	ptr = &a;

	printf("\nSizeof a= %d",sizeof(a));
	printf("\nSize of ptr = %d",sizeof(ptr));

	printf("\nAddress of a=%u",&a);
	printf("\nAddress of ptr=%u",&ptr);
	printf("\nContents of ptr = %u",ptr);

	printf("\na=%d\n",*ptr);

	*ptr = 20;
	printf("\na=%d\n",a);
	ptr = ch;
	printf("\nch=%s Address=%u\n ",*ptr,ptr);
	ptr++;
	printf("\nch=%c Address=%u\n",*ptr,ptr);
	


	printf("\n\n");
	return 0;
}