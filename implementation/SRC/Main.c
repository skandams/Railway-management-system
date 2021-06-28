#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "function.h"
void main(){
system("cls || clear");
	printf("\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\t\t|   WELCOME TO INDIAN RAILWAY RESERVATION SYSTEM ---> Developed And maintained by IRCTC  |\n");
	printf("\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^=\n\n\n");
	printf(" \n Click on any key to move ahead");
	getchar();



	login();

	int option;
	MainPage:
	printf("\n****************************************************************\n");
	printf(" RAILYATRI TICKET BOOKING SYSTEM");
	printf("\n******************************************************************");
	printf("\n[1] Reserve a New ticket to your favorite desitnation");
	printf("\n##########################################################################");
	printf("\n[2] View all of your booked tickets");
	printf("\n###########################################################################");
	printf("\n[3] Trains at Glans ( View all available Trains) ");
	printf("\n###########################################################################");
	printf("\n[4] validate Booked Tickets");
	printf("\n###########################################################################");
	printf("\n[5] IRCTC Ticket cancellation service");
	printf("\n###########################################################################");
	printf("\n[0] Close the application");
	printf("\n###########################################################################");
	printf("\n\nPlease enter your prefered choice : \n\n\n");


	scanf("%d",&option);
	switch(option)
	{
		case 1:
			reservation();
			break;
		case 2:
			display();
			break;
		case 3:
			trainsatglance();
			printf("\n\nPress any key to go back ");
			getchar();
			break;
		case 4:
			validate();
			break;
		case 5:
			cancel();
			break;
		case 0:
			exit(0);
		default:
			printf("The Option which you have selected is not available ");
	}
	goto MainPage;


}








