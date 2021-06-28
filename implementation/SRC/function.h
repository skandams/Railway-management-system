#include<stdbool.h>


typedef struct{
	char name[50];
	int train_num;
	int num_of_seats;
}pd;


void reservation(void);							//main reservation function


void trainsatglance(void);							//view details of all the trains


void display(void);	


void cancel(void);


void printticket(char name[],int,int,float);	//print ticket 


void specifictrain(int);						//print data related to specific train

float fare(int,int);							//charge automatically w.r.t number of seats and train

void login();


void compute();


void validate();


bool present(char name[]);


