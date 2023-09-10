/* 
Reverse of a given number

num= 12345

o/p
num= 54321

*/

#include <stdio.h>

int main()
{
	int num=12321;
	int temp = num;
	int rem=0, revnum=0;

	while(temp!=0)
	{
		rem = temp%10;
		revnum = revnum*10+rem;

		temp = temp/10;
	}
	//num = revnum;

	printf("Reverse of given number = %d", num);

	if(num == revnum)
			printf("\nPalindrome\n");
	else
		printf("\n Not a Plaindrome\n");
	return 0;
}