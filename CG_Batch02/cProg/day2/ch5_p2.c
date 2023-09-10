/*

 demo on nested if else

 */

 #include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if(a>b)
	{
		if(a>c)
			printf("\nA is biggest\n");
		else
			printf("\nC is biggest\n");

	}
	else
	{
		if(b>c)
			printf("\nB is biggest\n");
		else
			printf("\nC is biggest\n");


	}

	printf("\nProgram ends\n");

	return 0;
}