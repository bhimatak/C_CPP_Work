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

*/

#include <stdio.h>

int main()
{
	int a=15,b=4;
	int r_add=0,r_sub=0,r_mul=0;
	float r_div=0.0;

	r_add = a+b;

	r_sub = a-b;

	r_mul = a*b;

	r_div = (float) a/b;

	printf("\nAddition of 2 nos = %d",r_add);
	printf("\nSubstraction of 2 nos = %d",r_sub);
	printf("\nMultiplication of 2 nos = %d",r_mul);
	printf("\nDivision of 2 nos = %f",r_div);
	printf("\n\n");
	return 0;
}

