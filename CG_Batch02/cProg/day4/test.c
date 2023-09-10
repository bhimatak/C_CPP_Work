#include<stdio.h>

int main()
{
	printf("\n%c%c%c%c%c\n",66,72,73,77,65);
	char ch='A';
	int count=1;

	while(count<=26)
	{
		printf("%c = %d\n",ch,ch);
		ch++;
		count++;
	}


	return 0;
}