#include <stdio.h>

int main() {

    float avg,X,Y;

    while(1){

        scanf("%f",&X);

            if(0>X || X>10){
                printf("nota invalida\n");
            }

            else if(0<=X || X<=10){ break; }
    }

    while(1){

        scanf("%f",&Y);

            if(0>Y || Y>10){
                printf("nota invalida\n");
            }

            else if(0<=Y || Y<=10){ break; }
    }


            avg=(X+Y)/2;
            printf("media = %.2f\n",avg);

    return 0;
}
