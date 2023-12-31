#ifndef EMP_H
#define EMP_H

#include <stdio.h>
#include <stdlib.h>

struct empDetails
{
	int id;
	int sal;
	int acc_state;
	char name[20];

};

typedef struct empDetails EMP;


void *allocateEMP(int);
void inputData(EMP *,int);
void Write2db(EMP *, FILE *);
int ReadFromDB(EMP *, FILE *);
void display(EMP *, int);
int UpdatedRec(char *, int, FILE *);
int UpdatAccState(int, FILE *);
int dispMenu();


int dispMenu()
{
	int ch=0;
	printf("\n1. Create Record");
	printf("\n2. Display All Records");
	printf("\n3. Update the record");
	printf("\n4. Deactivate the record");
	printf("\n5. Exit");
	printf("\nChoice: ");
	scanf("%d",&ch);
	return ch;
}



int UpdatedRec(char *str, int id, FILE *fp)
{
	int flag=0;
	EMP e1;
	printf("\nSearch the Employee Details from DB\n");
	
	while(fread(&e1,sizeof(EMP),1,fp))
	{
		if(e1.acc_state != 0){
			if(e1.id == id)
			{
				strcpy(e1.name,str);
				flag = 1;
				break;
			}
		}
		
	}

	if(flag == 1)
	{
		fseek(fp,(-1)*sizeof(EMP),SEEK_CUR);
		fwrite(&e1,sizeof(EMP),1,fp);	
		return 1;
	}
	return 0;
	

}




int UpdatAccState(int id, FILE *fp)
{
	int flag=0;
	EMP e1;
	printf("\nSearch the Employee Details from DB\n");
	
	while(fread(&e1,sizeof(EMP),1,fp))
	{
		if(e1.acc_state != 0){
			if(e1.id == id)
			{
				e1.acc_state = 0;
				flag = 1;
				break;
			}
		}
		
	}

	if(flag == 1)
	{
		fseek(fp,(-1)*sizeof(EMP),SEEK_CUR);
		fwrite(&e1,sizeof(EMP),1,fp);	
		return 1;
	}
	return 0;
	

}

void *allocateEMP(int NoOfElems)
{
	return (malloc(NoOfElems*sizeof(EMP)) );
}

void inputData(EMP *e,int NoOfElems)
{
	int i;
	for(i=0;i<NoOfElems;i++,e++)
	{
		printf("\nEnter Name of Employee: ");
		scanf("%s",e->name);
		printf("\nEnter ID of Employee: ");
		scanf("%d",&e->id);
		printf("\nEnter Salary of Employee: ");
		scanf("%d",&e->sal);
		e->acc_state = 1;
			
	}

}

void display(EMP *e,int NoOfElems)
{
	int i;
	printf("\n\n=====Display the Employee Details=====\n");
	for(i=0;i<NoOfElems;i++,e++)
	{
		if(e->acc_state == 1){
			printf("\nName of Employee: ");
			printf("%s",e->name);
			printf("\nID of Employee: ");
			printf("%d",e->id);
			printf("\nSalary of Employee: ");
			printf("%d",e->sal);
		}
		else
			printf("\nAccount is not Active\n");
			
	}
}

void Write2db(EMP *e,FILE *fp)
{
	int i;
	printf("\nWriting records to DB......\n");
	fseek(fp,0,SEEK_END);
	//for(i=0;i<NoOfElems;i++,e++)
	//{
		fwrite(e,sizeof(EMP),1,fp);
			
	//}
}

int ReadFromDB(EMP *e, FILE *fp)
{
	int i, count=0;
	EMP e1;
	printf("\nRead the Employee Details from DB\n");
	
	while(fread(&e1,sizeof(EMP),1,fp))
	{
		count++;
		display(&e1,1);
		
	}
	/*fseek(fp,0,SEEK_SET);
	for(i=0;;i++,e++, count++)
	{
		
		//if(feof(fp))
		//	break;
		if(fread(&e,sizeof(EMP),1,fp) == 0)
			break;
		//display(e,1);
			
	}
	printf("\ncount=%d",count);*/

	return count;
		
}

#endif