/*
Demo on Selection Sort
*/


#include <stdio.h>
#include<stdlib.h>


void display(int [], int);
void selSort(int [], int);

int main()
{
	int a[] = {-2,45,0,11,-9};
	int Cap = sizeof(a)/sizeof(a[0]);

	printf("\nBefore Sorting\n");
	display(a,Cap);
	printf("\nAfter Selection Sort\n\n");
	selSort(a,Cap);
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



void selSort(int a[], int Cap)
{
	int Min, i, step,t;

	for(step = 0;step <Cap-1;step++)
	{
		Min = step;

		for(i=step+1;i<Cap;i++)
		{
			if(a[i] < a[step])
				Min = i;
		}
		
		//swap with the first element in unsorted list
		t = a[step];
		a[step] = a[Min];
		a[Min] = t;
		display(a,Cap);

	}
}