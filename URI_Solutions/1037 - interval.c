#include<stdio.h>

    int main(){

        float x;

        scanf("%f",&x);

        if(0<=x && x<=25.0000)
        {
            printf("Intervalo [0,25]\n");

        }//1st if

        else if(25<x && x<=50.0000000)
        {
            printf("Intervalo (25,50]\n");

        }//2nd

        else if(75<x && x<=100.0000000)
        {
            printf("Intervalo (75,100]\n");

        }//3rd

        else
        {
            printf("Fora de intervalo\n");
        }


    }//end of main
