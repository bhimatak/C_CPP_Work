#ifndef EMP_H
#define EMP_H

struct EMP
{
		int empID;
		char empName[20];
		float empSal;
		
};

typedef struct EMP EMP;

void display(EMP);
void ipEMPDetails(EMP *);
int highSal(EMP *,int);
int lowSal(EMP *,int);


void ipEMPDetails(EMP *E)
{
	printf("\nEnter the details of the Employee\n");
	printf("\nName: ");
	scanf("%s",E->empName);
	printf("\nEmp ID: ");
	scanf("%d",&E->empID);
	printf("\nEmp Salary: ");
	scanf("%f",&E->empSal);
}


void display(EMP E)
{
	
	printf("\n=============================\n");
	printf("\nEmp Name: %s",E.empName);
	printf("\nEmp ID: %d",E.empID);
	printf("\nEmp Salary: %f ",E.empSal);
	printf("\n=============================\n");
	
}

int highSal(EMP *E,int Cap)
{
	int i;
	float Big;
	Big = E[0].empSal;
	for(i=0;i<Cap;i++)
	{
		if(Big < E[i].empSal)
		{
			Big = E[i].empSal;
		}
	}
	return Big;
}



int lowSal(EMP *E,int Cap)
{
	int i;
	float low;
	low = E[0].empSal;
	for(i=0;i<Cap;i++)
	{
		if(low > E[i].empSal)
		{
			low = E[i].empSal;
		}
	}
	return low;
}

#endif