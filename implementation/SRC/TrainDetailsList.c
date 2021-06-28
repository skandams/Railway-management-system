#include "function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void trainsatglance(void)
{
	printf("\e[1;1H\e[2J");
	printf("-----------------------------------------------------------------------------");
	printf("\nTr.No\tName\t\t\tDestinations\t\tCharges\t\tTime\n");
	printf("-----------------------------------------------------------------------------");
	printf("\n1001\tChamundi Express\tMysore to Banglore\tRs.65\t\t9am");
	printf("\n1002\tMangala express\tMysore To Manglore\tRs.65\t\t12pm");
	printf("\n1003\tBhagmathi express\tMysore to Dharbhanga\t\tRs.85\t\t8am");
	printf("\n1004\tMalgudi Express\tMysore to Yeshwanthpur\t\tRs.902\t\t11am");
	printf("\n1005\tKaveri Express\tMysore to Chennai\tRs.660\t\t7am");
	printf("\n1006\tTuticorin Express\t\t Mysore To Tirunelveli\tRs.570\t\t9.30am");
    printf("\n1007\tJaipur express\tMysore to jaipur\tRs.4588\t\t1pm");

}
