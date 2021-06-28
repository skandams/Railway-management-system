#include "function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void display(void){
    FILE *fp;
    fp = fopen("Reservtation_database.txt", "a+");
    if(fp == NULL)
    {
        printf("No Records were found for your query");
        printf("\n Press any key to go back ....");
        getchar();
    }
    printf("\n Booked Ticket:\n\n");
    char ch;
    while((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    printf("Press any key to go back ....");
    getchar();
    getchar();
}
