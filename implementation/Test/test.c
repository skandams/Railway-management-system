#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"

char confirm;
void check(void)
{
    TEST_ASSERT_EQUAL('y',confirm);
}

int main(){
    FILE *fp;
	fp=fopen("SRC/Reservation_database.txt","r");
     if(fp == NULL)
    {
        confirm='n';
    }else{
        confirm='y';
    }
    UNITY_BEGIN();
    RUN_TEST(check);
    return UNITY_END();
}
