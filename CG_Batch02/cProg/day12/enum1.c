/* 

demo on enum
enumerated datatype

enum enum_tagName {const1, const2,.....};

ex: enum Week{Mon, Tue, Wed, Thru, Fri, Sat, Sun};

ex: enum status{Passed=1,Failed=0};


*/

#include <stdio.h>

enum Week{ Mon=1001, Tue, Wed, Thru=2001, Fri, Sat, Sun };
enum status{Passed,Failed};
//enum result{Failed, Passed};
int main()
{
	enum Week day;
	int i;

	printf("\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",Mon, Tue, Wed, Thru, Fri, Sat, Sun);

	printf("\nP value=%d\nF Value=%d\n",Passed,Failed);

	day = Wed;
	printf("\nDay =%d\n",day);

	for(i=Mon;i<=2004;i++)
	{
		printf("\ni=%d",i);
	}

	printf("\n\n");
	return 0;
}