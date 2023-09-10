/*
   Demo on stack operations
   - using  arrays
*/


#include <stdio.h>
#include<stdlib.h>

#define MAX 5

int st[MAX];
int bottom=-1;
int top;


void push();
void pop();
void dispElemts();

int main()
{
	int ch=1;
	top = bottom;

	while(1){
		printf("\n1. Push");
		printf("\n2. Pop");
		printf("\n3. Display");
		printf("\n4. Exit");
		printf("\nchoice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				printf("\nStack Elements are\n");
				dispElemts();
				break;
			case 4:
				printf("\nProgram Ends\n");
				exit(EXIT_SUCCESS);
				break;
			default:
				printf("\nEnter the correct choice");
		}
		
			
	}

	printf("\n\n");
	return 0;
}


void push()
{
	int val;

	if(top == MAX-1)
	{
		printf("\nStack is full\n");
		return;
	}
	printf("\nEnter the value to be pushed: ");
	scanf("%d",&val);
	st[++top] = val;

}


void pop()
{
	if (top == bottom)
	{
		printf("\nStack is Empty\n");
		return;
	}

	printf("\nPoped out element is: %d",st[top--]);
}


void dispElemts()
{
	int i;

	if(top == bottom)
	{
		printf("\nStack is Empty\n");
		return;
	}

	for(i=top;i>=0;i--)
		printf("\n%d",st[i]);
	
}