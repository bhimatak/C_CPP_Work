/*
	demo on io statements
*/

#include <stdio.h>

int main()
{
	/*
	// formatted io sts

	int a;

	scanf("%3d",&a);

	//printf("%d\n", a);
	printf("value of a = %06d\n", a);



	printf("\n\n");


*/

	unsigned char ch='a';
	unsigned char ch1;
	int ret=0;

	//printf("%c\n",ch);

	//ch1 = getchar();

	ch1 = getc(stdin);


	//ret = putchar(ch);
	ret = putc(ch1, stdout);

	printf("\nret = %d\n",ret);

	printf("\n\n");
	return 0;
}