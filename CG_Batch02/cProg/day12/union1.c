/* demo on Union */

#include <stdio.h>
#include <string.h>

typedef struct empdet{
	int id;
	float sal;
	char name[20];
}EMP_S;

typedef union empdet1{
	int id;
	float sal;
	char name[20];
}EMP_U;

int main(int argc, char const *argv[])
{
	EMP_S es1;
	EMP_U eu1;

	printf("\nSizeof Struct es1=%d",sizeof(es1));
	printf("\nSizeof union eu1=%d",sizeof(eu1));

	es1.id = 1001;
	es1.sal = 10001;
	strcpy(es1.name,"Pratibha");

	printf("\n\n===Emp Struct details====\n");
	printf("\n%d\n%f\nName=%s\n",es1.id,es1.sal,es1.name);

	
	
	strcpy(eu1.name,"Kaivalya");
	eu1.sal = 10002;
	eu1.id = 1002;

	printf("\n\n===Emp Union details====\n");
	printf("\n%d\n%f\nName=%s\n",eu1.id,eu1.sal,eu1.name);

	/* code */
	printf("\n\n");
	return 0;
}