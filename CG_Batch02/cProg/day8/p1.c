/*

Demo on functions-> call by reference/ pass by address

*/

#include <stdio.h>

void swapNos(int *,int *);
void swapNosV();
const int ptr1=10;
const int ptr2=20;
int main()
{
	int a=10,b=20;

	
	printf("\nPass by value call\n");
	swapNosV();
	printf("\na=%d\nb=%d\n",ptr1,ptr2);

	printf("\nPass by address call\n");
	swapNos(&a,&b);
	printf("\na=%d\nb=%d\n",a,b);



	return 0;
}

void swapNosV()
{
	int *temp;
	int t1=ptr1;

	temp = &ptr1;
	*temp = ptr2;
	temp = &ptr2;
	*temp = t1;
	
	printf("\nWithin function\na=%d\nb=%d\n",ptr1,ptr2);
}


void swapNos(int *ptr1, int *ptr2)
{
	int temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}