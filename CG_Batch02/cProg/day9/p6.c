/*

Demo on different pointers

1. void pointer /general purpose pointer
2. NULL pointer
3. Wild pointer
4. Dangling pointer

*/

#include <stdio.h>
#include <stdlib.h>

int *func1();

int main()
{
	/*
	int a=10;
	float b=20;
	float c=30.5;
	void *ptr;  //void pointer

	ptr = &a;
	printf("\na=%d",*((int *)ptr));//*((int *)ptr));

	ptr = &b;
	printf("\nb=%f",*((float *)ptr));

	a = c;

	printf("\na=%f",(float)a);

	*/

/*
	int *ptr=NULL;      //NULL pointer
	int a;
	char *ptr1 = '\0';  //NULL pointer
	ptr = (int *)malloc(sizeof(int));
	*ptr = 1001;
	printf("\n%d\n",*ptr);
	free(ptr);

*/
/*

	int *ptr;      //WILD pointer

	char *ptr1;  //WILD pointer
	//ptr = (int *)malloc(sizeof(int));
	//*ptr = 1001;
	printf("\n%d\n",*ptr);
	//free(ptr);


*/
	int *ptr=NULL;
	int a=30;
	ptr = func1();

	//ptr = &a;

	printf("\nIn Main\n");
	printf("\nAddress of Val1=%u and its value =%d",ptr,*ptr);

	*ptr = 1001;

	func1();
	printf("\n\n");
	return 0;


}


int *func1()
{
	static int val1=10;
	printf("\nAddress of Val1=%u and its value =%d",&val1,val1);

	return (&val1);
}
