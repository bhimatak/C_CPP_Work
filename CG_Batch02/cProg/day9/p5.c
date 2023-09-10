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

struct empDetails
	{
		int empID;
		char empName[20];
		float empSal;
		
	};
void display(struct empDetails);



int main()
{
	
	

	struct empDetails E1,E2;
	//struct compDetails C1,C2;
	
	E1.empID = 1001;
	E1.empSal = 10000;

	strcpy(E1.empName, "Bhima");

	//display(E1)

	E2.empID = 1002;
	E2.empSal = 20000;
	
	strcpy(E2.empName, "Shankar");

	
	display(E1);
	
	printf("\nEmp Name: %s",E2.empName);
	printf("\nEmp ID: %d",E2.empID);
	printf("\nEmp Salary: %f ",E2.empSal);

	//printf("\nSizeof E1=%d\nSizeof E2=%d",sizeof(E1),sizeof(E2));
	//printf("\nAddress E1=%u\nAddress E2=%u\n",&E1,&E2);
	printf("\n\n");
	return 0;

}


void display(struct empDetails E)
{
	printf("\n=============================\n");
	printf("\nEmp Name: %s",E.empName);
	printf("\nEmp ID: %d",E.empID);
	printf("\nEmp Salary: %f ",E.empSal);
	printf("\n=============================\n");
}