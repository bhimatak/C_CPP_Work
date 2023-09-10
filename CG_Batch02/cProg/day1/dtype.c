/*
   data type and its size

*/

#include <stdio.h>

void main()
{
	char ch;
	int i;
	float f;
	long double d;


	ch = 'A';
	i = 10;
	f = 13.3;
	d = 3.14e+2;

	printf("\nSize of char=%ld and its value = %c",sizeof(ch),ch);
	printf("\nSize of integer=%ld and its value = %d",sizeof(i),i);
	printf("\nSize of float=%ld and its value = %f",sizeof(f),f);
	printf("\nSize of double=%ld and its value = %Lf\n",sizeof(d),d);
}//EOM
	

