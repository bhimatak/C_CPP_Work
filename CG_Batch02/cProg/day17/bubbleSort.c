/*
Demo on Bubble Sort
*/

#include <stdio.h>
#include<stdlib.h>


void display(int [], int);
void bSort(int [], int);

int main()
{
	int a[] = {-2,45,0,11,-9};
	int Cap = sizeof(a)/sizeof(a[0]);

	printf("\nBefore Sorting\n");
	display(a,Cap);
	printf("\nAfter Bubble Sort\n");
	bSort(a,Cap);
	display(a,Cap);

	printf("\n\n");
	return 0;
}

void display(int a[], int Cap)
{
	int i;
	for(i=0;i<Cap;i++)
		printf(" %d ",a[i]);
	printf("\n");
}

void bSort(int a[], int Cap)
{
	int i,step, temp;
	for(step=0;step<Cap-1;step++){
		for(i=0;i<Cap - step -1;i++)
		{
			if(a[i] > a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
}