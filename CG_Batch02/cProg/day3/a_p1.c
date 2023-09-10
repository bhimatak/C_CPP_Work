#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */

	int num=5;
	int i,j,k,l, count=0;
	if(num >3){
	for(i=1;i<num;i++)
	{
		for(j=i;j<num;j++)
		{
			for(k=j;k<num;k++)
			{
				for(l=k;l<num;l++)
				{
					if((i+j+k+l)==num)
					{
						printf("\n%d + %d + %d + %d = %d",i,j,k,l,num);
						count++;
					}

				}
			}
		}
	}
	}

	printf("\nCount = %d\n",count);
	return 0;
}