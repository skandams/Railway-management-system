#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define BUFFER_SIZE 700
#include "function.h"


int deleteLine(FILE *srcFile, FILE *tempFile, char name[]);
void printFile(FILE *fptr);
int num;


void cancel(void){
    FILE *srcFile;
    FILE *tempFile;
    int line;
    char name[100];
    srcFile  = fopen("seats_reserved.txt", "r");
    tempFile = fopen("delete-line.txt", "w");
    if (srcFile == NULL || tempFile == NULL)
    {
        printf("Error in Opening file.\n");
        printf("Please check your previleges.\n");
        exit(EXIT_FAILURE);
    }
    printf("\nBooked Tickets: \n\n");
    printFile(srcFile);
    printf("\nEnter the name of Ticket Holder for Cancellation: ");
    scanf("%s", name);
    rewind(srcFile);
    num=deleteLine(srcFile, tempFile, name);
    fclose(srcFile);
    fclose(tempFile);
    remove("seats_reserved.txt");
    rename("delete-line.txt", "seats_reserved.txt");

    if(num==0){
        printf("RECORD NOT FOUND !!!\n");
        printf("\nPress any key to go back to  Main menu_");
        getchar();
		getchar();
    }else{
        printf("\nIRCTC Ticket Cancelled \n");
        printf("\n\n Present List of Booked Tickets  :\n\n");
        srcFile = fopen("seats_reserved.txt", "r");
        printFile(srcFile);
        fclose(srcFile);
        printf("\nPress any key to go back ");
        getchar();
        getchar();
    }
}

void printFile(FILE *fptr)
{
    char ch;
    while((ch = fgetc(fptr)) != EOF)
        putchar(ch);
}
int deleteLine(FILE *srcFile, FILE *tempFile, char name[])
{
    char buffer[BUFFER_SIZE];
    int count = 1,c=0;
    while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
    {
        char *pch =strstr(buffer,name);
        if (pch==NULL){
             fputs(buffer, tempFile);
        }else{
            c++;
        }
        count++;
    }
    return c;
}


