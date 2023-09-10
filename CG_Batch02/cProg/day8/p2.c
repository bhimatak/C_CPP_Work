#include <stdio.h>

void dispArray(int [], int);

int main()
{
	int a[5];
	int i;

	for(i=0;i<5;i++)
		a[i] = i+2;

	dispArray(a,5);
	printf("\n\n");
	return 0;
}

void dispArray(int arr[], int Cap)
{
	int i;
	for(i=0;i<Cap;i++)
		printf(" %d",arr[i]);
	printf("\n\n");
}