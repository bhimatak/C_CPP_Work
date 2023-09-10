/*

Demo on File io with fwrite and fread

*/

#include <stdio.h>
<<<<<<< HEAD
#include<string.h>
=======
#include <string.h>
>>>>>>> 62a2ddbadec12cb5a3708b0967fc4a8edb4f221d
#include "Users.h"

int main(int argc, char const *argv[])
{
	USERS u[3];
	char t[2]={'\0'};
	int ret=0;
	
	char cPasswd[20]={'\0'};
	int cUid=0, i, flag=0;

	for(i=0;i<3;i++)
	{	
		setUsers(&u[i]);
		gets(t);
	}
	
	for(i=0;i<3;i++)
	{	
		getUsers(u[i]);
		
	}
	
	printf("\nEnter the User ID and Passwd: ");
	scanf("%d%s",&cUid, cPasswd);
<<<<<<< HEAD
 	
	for(i=0;i<3;i++)
 	{
		ret=checkUser(u[i],cUid,cPasswd);
		if(ret>0)
			break;
	}

	if(ret==1)
		printf("\nUserId Is found but password doesnot match\n");
	else if(ret==2)
		printf("\nUser found Successfully :- Userid and Password\n");
	else
		printf("\nUser Not Found\n");
=======
// find if the userid and passwd matches with existing db

	for(i=0;i<3;i++)
	{
		if(u[i].Uid == cUid)
		{
			if(strcmp(u[i].Upasswd,cPasswd)==0)
			{
				flag = 1;
				break;
			}
		}
	}
>>>>>>> 62a2ddbadec12cb5a3708b0967fc4a8edb4f221d

	if(flag != 1)
		printf("\nCheck UID/Password\n");
	else
		printf("\nMatched\n");
	
	printf("\nEnd of Program\n");




	return 0;
}
