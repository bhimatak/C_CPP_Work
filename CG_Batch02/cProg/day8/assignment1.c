/*
cal area of shapes using cmd line args

i/p 
./area square 2
o/p
area = 4

i/p 
./area reactangle 2 3
o/p
area = 6

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	/* code */
	printf("\n%d\n",argc);
	if(argc>2 && argc<=3)
	{
		
		//code for square

		if(strcmp(argv[1], "square") == 0)
		{
			printf("\nArea of square : %d\n",(atoi(argv[2])*atoi(argv[2])));
		}
		else
		{
			printf("\nCheck the no of args required\n");
			exit(EXIT_FAILURE);
		
		}
	}
	else if(argc>3 && argc <= 4)
	{
		//code for other shapes
		printf("\nArea of other shapes\n");
		if(strcmp(argv[1],"triangle")==0)
		{
				printf("\nTriangle Area: %f\n",(0.5*atof(argv[2])*atof(argv[3])));
		}
		else if(strcmp(argv[1],"rectangle")==0)
		{
				printf("\nRectangle Area: %d\n", (atoi(argv[2])*atoi(argv[3])));
		}
		else{
			printf("\nEnter the correct shape name\n");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		printf("\nCheck the no of args required\n");
		exit(EXIT_FAILURE);
	}




	return 0;
}