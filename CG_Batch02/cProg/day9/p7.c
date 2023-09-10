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

typedef struct EMP
	{
		int empID;
		char empName[20];
		float empSal;
		
	}EMP;

//typedef struct EMP EMP;



void display(EMP *);



int main()
{
	
	

	EMP E1,E2;
	//struct compDetails C1,C2;
	
	E1.empID = 1001;
	E1.empSal = 10000;

	strcpy(E1.empName, "Bhima");

	//display(E1)

	E2.empID = 1002;
	E2.empSal = 20000;
	
	strcpy(E2.empName, "Shankar");

	
	display(&E1);
	
	printf("\nEmp Name: %s",E2.empName);
	printf("\nEmp ID: %d",E2.empID);
	printf("\nEmp Salary: %f ",E2.empSal);

	printf("\nUpdated Name of E1: %s",E1.empName);
	//printf("\nAddress of E1=%u",&E1);

	printf("\n\n");
	return 0;

}


void display(EMP *E)
{
	
	printf("\n=============================\n");
	printf("\nEmp Name: %s",E->empName);
	printf("\nEmp ID: %d",E->empID);
	printf("\nEmp Salary: %f ",E->empSal);
	printf("\n=============================\n");
	printf("\nAddress of E=%u",E);
	strcpy(E->empName,"Ashutosh");


}