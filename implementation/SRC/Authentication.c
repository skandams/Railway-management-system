#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "function.h"


void login()
{
    char uname[10],passs[10],capt[10];
	int attempt=0;
	do
	{
		printf("\n  ******************************* WELCOME TO IRCTC , PLEASE LOGIN *************************************\n   ");
		printf(" \n                       ENTER USERNAME:-");
		scanf("%s", uname);
		printf(" \n                       ENTER PASSWORD:-");
		scanf("%s",passs);
		printf(" \n Enter the shown captcha to verify you are not a robot  ---->  71617##  \t\t\t\t\t");
		scanf("%s",capt);
		if(strcmp(uname,"admin")==0 && strcmp(passs,"root")==0 && strcmp(capt,"71617##")==0)
		{
		printf("  \n\n\n***************** WELCOME TO IRCTC !! YOUR LOGIN IS SUCCESSFUL*************************\n");
		printf("\n\n\n\t\t\t\tPress any key to continue...");
		getchar();
		getchar();
		printf("\e[1;1H\e[2J");
		break;
		}
		else
		{
			printf("\n        OOPS!!! You have forgotten the password  \n");
			attempt++;
			printf("\n\n\n\t\t\t\t Press any key to Login again...");
			getchar();
			getchar();
			printf("\e[1;1H\e[2J");
		}
	}while(attempt<=2);
	if (attempt>2)
	{
		printf("\nSorry you have entered wrong credentials multiple times");
		getchar();
		exit(0);
	}


}
