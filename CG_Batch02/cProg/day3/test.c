#include <stdio.h>


int main()
{
	int a,c;
	char b;
	int count=0;

	//count = printf("hello world");
	//printf("\nCount = %d\n", count);

	//count = scanf("%d%c%d",&a,&b,&c);
	if(scanf("%d%c%d",&a,&b,&c)==3){
		printf("\nCount = %d\n", count);
		while(count)
		{
			
			printf("\n%d",count--);

		}
	}
	printf("\nprogram ends\n");

	return 0;

}