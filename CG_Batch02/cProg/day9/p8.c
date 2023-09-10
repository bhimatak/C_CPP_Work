/*
  demo on structures

  struct tag_name
  {
	data_type member1;
	data_type member2;
	data_type member3;
	
  };

to access the memebers of the structure
. => dot operator / member of operator
-> (if the structure is declared with pointers)

*/

#include<stdio.h>
#include<string.h>
#include "emp.h"

int main()
{
	
	EMP E[3];
	int i;
	float avg=0.0;
	for(i=0;i<3;i++){
		ipEMPDetails(&E[i]);
		avg = avg+(float)E[i].empSal;
	}
	printf("Avg =%f",avg/3.0);
	for(i=0;i<3;i++){
		display(E[i]);
	}

	printf("\nHighest =%d",highSal(E,3));
	printf("\nLowest =%d",lowSal(E,3));
	
	
	
	
	printf("\n\n");
	return 0;

}
