/*

Demo on functions

1. declaring a function
ret_datatype func_name(args);

2. defining a fuction
ret_datatype func_name(args)
	{
		//code for the function

		return (return_value); // return_value => ret_datatype
	}

3. calling a function
func_name(args_values);

two type of calling a funtion
1. call by value... // pass the values of the variables
2. call by address/reference // pass the address/reference of the variables


functions with args, and no return values

*/

#include <stdio.h>

//proto type declaration of fuctions

void addition(int,int);
int Sub(int,int);
int Multi(int,int);
float Div(int,int);



int main()
{
	int a=15,b=4;
	int r_sub=0,r_mul=0, r_add=0;
	float r_div=0.0;

	r_add = addition(a,b); // calling a function and its call by value

	r_sub = Sub(a,b);

	r_mul = Multi(a,b);

	r_div = Div(a,b);   //type casted to float from int

	//printf("\nAddition of 2 nos = %d",r_add);
	addition(a,b);
	printf("\nSubstraction of 2 nos = %d",r_sub);
	printf("\nMultiplication of 2 nos = %d",r_mul);
	printf("\nDivision of 2 nos = %f",r_div);
	printf("\n\n");
	//printf("\nAddition of 2 nos = %d",addition(3,4));
	printf("\n\n");
	return 0;
}


void addition(int val1,int val2)
{
	int ret_val;

	ret_val = val1+val2;
	printf("\nAddition of 2 nos = %d",ret_val);
	
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