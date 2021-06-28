#include "function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


char name[100];
bool check;

void validate(){
    printf("Enter the name of Ticket holder name: ");
    scanf("%s",name);
    check=present(name);

    if(check==1){
        printf("Ticket Holder Exist.. Validate your tickets..\n");
    }else{
        printf("RECORD NOT FOUND..\n");
    }
    printf("\nPress any key to go back to Main menu_");
    getchar();
    getchar();
}

