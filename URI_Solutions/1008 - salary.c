#include<stdio.h>


    void main(){

        int NUMBER,worked_hour;
        float SALARY,amount_per_hour;


        scanf("%d%d%f",&NUMBER,&worked_hour,&amount_per_hour);

        SALARY=worked_hour*amount_per_hour;

        printf("NUMBER = %d\nSALARY = U$ %0.2f\n",NUMBER,SALARY);
    }
