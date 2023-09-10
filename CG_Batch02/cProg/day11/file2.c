/*

Demo on File io with fwrite and fread

*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "Users.h"

int main(int argc, char const *argv[])
{
	USERS u,u1;
	char t[2]={'\0'};
	
	char cPasswd[20]={'\0'};
	int cUid=0, i, flag=0;

	FILE *fptr;

	fptr = fopen("Users.dat","r+");

	if(fptr == NULL)
	{
		printf("\nUnable to open the file\n");
		exit(EXIT_FAILURE);
	}

	fseek(fptr,0,SEEK_SET);
	/*
	for(i=0;i<3;i++)
	{	
		setUsers(&u);
		fwrite(&u,sizeof(u),1,fptr);
		gets(t);
	}

*/
	printf("\nEnter the User ID and Passwd: ");
	scanf("%d%s",&cUid, cPasswd);

	for(i=0;i<3;i++){
		fread(&u1,sizeof(u1),1,fptr);
		if(u1.Uid == cUid)
		{
			if(strcmp(u1.Upasswd,cPasswd)==0)
			{
				flag = 1;
				break;
			}
		}
		
		//getUsers(u1);
	}


	/*
	for(i=0;i<3;i++)
	{	
		getUsers(u[i]);
		
	}
	*/
	
	
// find if the userid and passwd matches with existing db
/*
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
*/
	if(flag != 1)
		printf("\nCheck UID/Password\n");
	else
		{
			printf("\nMatched\n");
			getUsers(u1);
		}
	

	fclose(fptr);
	printf("\nEnd of Program\n");




	return 0;
}
