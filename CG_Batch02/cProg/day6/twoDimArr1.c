/*
Demo on 2 dim array

op[SIZE][SIZE]
=>
op[ROW][COL] => string [no of strings][length of each string]

op[3][6] = {"Bhima","Ravi","Rahul"};

2000 2001 2002 2003 2004 2005 
 'B'  'h'  'i'  'm'  'a' '\0'
2006 2007 2008 2009 2010 2011
 'R'  'a'  'v'  'i' '\0' 
 2012 2013 2014 2015 2016 2017
 'R'  'a'  'h'  'u'   'l' '\0'

 printf("%s",op[0]) => string
 printf("%c",op[1][2]) => character



*/

#include <stdio.h>
#include <string.h>
#define COL 6
#define ROW 3
int main()
{
	char name[ROW][COL] = {'\0'};
	int i;
	
	strncpy(name[0],"Bhimashankar",COL-1);
	strncpy(name[1],"RahulKumar",COL-1);
	strncpy(name[2],"Ravi Kumar",COL-1);

	printf("\nName1 : %s and its address=%u",name[0],&name[0]);
	printf("\nName2 : %s and its address=%u",name[1],&name[1]);
	printf("\nName3 : %s and its address=%u",name[2],&name[2]);

	printf("\nsizeof(name)= %d\nsizeof(name[0])=%d",sizeof(name),sizeof(name[0]));

	for(i=0;i<30;i++)
		printf("\nAddress=%u\tName1[%d]=> character = %c Ascii=%d",&name[0][i],i,name[0][i],name[0][i]);
	
	
	printf("\n\n");
	return 0;

}