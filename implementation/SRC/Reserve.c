
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include "function.h"
char confirm;


float fare(int train_num,int num_of_seats)
{
		if (train_num==1001)
	{
		return(5000.0*num_of_seats);
	}
	if (train_num==1002)
	{
		return(4000.0*num_of_seats);
	}
	if (train_num==1003)
	{
		return(1500.0*num_of_seats);
	}
	if (train_num==1004)
	{
		return(4500.0*num_of_seats);
	}
	if (train_num==1005)
	{
		return(4000.0*num_of_seats);
	}
	if (train_num==1006)
	{
		return(4000.0*num_of_seats);
	}
	if (train_num==1007)
	{
		return(3500.0*num_of_seats);
	}
	if (train_num==1008)
	{
		return(3500.0*num_of_seats);
	}
}


void reservation(void)
{
	int i=0;
	float charges;
	pd passdetails;
	FILE *fp;
	fp=fopen("Reservation_database.txt","a+");
	
	printf("\nPlease Enter Your Name: ");
	fflush(stdin);
	scanf("%s",passdetails.name);
	printf("\nEnter Number of seats to be booked : ");
	scanf("%d",&passdetails.num_of_seats);
	printf("\n\nPress Enter For Available Trains.. ");
	getchar();
	trainsatglance();

	printf("\n\n Enter the Train number to book the ticket ");
	start1:
	scanf("%d",&passdetails.train_num);
	if(passdetails.train_num>=1000 && passdetails.train_num<=1010)
	{
		charges=fare(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);
	}
	else
	{
		printf("\nInvalid train Number! Enter again : ");
		goto start1;
	}

	printf("\n\nConfirm Ticket (y/n):>");
	start:
	scanf(" %c",&confirm);

	if(confirm == 'y')
	{
		fprintf(fp, "++++++++++++++++\n");//writing data into file  
		printf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);
		fclose(fp);
		printf("=========================================");
		printf("\n YOUR TICKET IS CONFIRMED WITH IRCTC \n");
		printf("==========================================");
		printf("\nPress any key to go back to Main menu_");
		getchar();
	}
	else
	{
		if(confirm=='n'){
			printf("\nTICKET BOOKING IS FAILED");
			printf("\nPress any key to go back to  Main menu_");
			getchar();
		}
		else
		{
			printf("\nInvalid choice entered! Enter your choice again : ");
			goto start;
		}
	}
	fclose(fp);
	getchar();
}
