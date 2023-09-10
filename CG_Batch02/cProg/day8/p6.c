/*

command line arguments with atoi function used

./p6 5 6

*/

#include <stdio.h>
#include <stdlib.h>

//proto type declaration of fuctions

int addition(int,int);
int Sub(int,int);
int Multi(int,int);
float Div(int,int);



int main(int argc, char **argv)
{
	if(argc <4){
		printf("\nLess no of arguments\n");
		printf("\nUsage: ./calculate int op int\n");
		exit(EXIT_FAILURE);
	}
	int a=atoi(argv[1]),b=atoi(argv[3]);
	int r_sub=0,r_mul=0, r_add=0;
	float r_div=0.0;

	char op=argv[2][0];

	//scanf("%c",&op);

	switch(op)
	{
		case '+':
			printf("\nAddition of 2 nos = %d",addition(a,b));
			break;
		case '-':
			printf("\nSubstraction of 2 nos = %d",Sub(a,b));
			break;
		case 'x':
			printf("\nMultiplication of 2 nos = %d",Multi(a,b));
			break;
		case '/':
			printf("\nDivision of 2 nos = %f",Div(a,b));
			break;
		default:
			printf("\nEnter the correct operand");

	}


	printf("\n\n");
	return 0;
}


int addition(int val1,int val2)
{
	return(val1+val2);
	
	
}


int Sub(int val1,int val2)
{
	int ret_val;

	ret_val = val1-val2;
	
	return (ret_val);
}

int Multi(int val1,int val2)
{
	return (val1*val2);
}

float Div(int val1,int val2)
{
	return ((float)val1/val2);
}