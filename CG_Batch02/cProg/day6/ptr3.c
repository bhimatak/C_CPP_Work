/* 

demo on pointers

*/

#include <stdio.h>

int main()
{
	const int a[3]={1,2,3};

	
	int *ptr;

	ptr = a;


	printf("\nBA of A=%u",a);
	printf("\nContent of ptr=%u",ptr);

	printf("\nContent of content of ptr=%u",*(ptr+0));
	ptr++;
	printf("\nContent of content of ptr=%u",*(ptr+0));
	printf("\nContent of content of ptr=%u",*(ptr+1));
	
	/*
	printf("\nContent of content of ptr=%u",*ptr);
	ptr = ptr + 1; //ptr+=1; //ptr++;
	printf("\nContent of content of ptr=%u",*ptr);
	ptr++; //ptr+=1; //ptr++;
	printf("\nContent of content of ptr=%u",*ptr);
	ptr*=2;
	printf("\nContent of content of ptr=%u",*(ptr+0));

	//only +,-,++,-- operators can be applied on pointers
	*/

	
	


	printf("\n\n");
	return 0;
}