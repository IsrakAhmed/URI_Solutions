#include <stdio.h>

int main() {

    int N;
    float avg,X,Y;

    while(1){

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

    while(1){
                    printf("novo calculo (1-sim 2-nao)\n");

            scanf("%d",&N);

            if(N==2){ exit(0); }
            else if (N==1){ break; }
            }

            continue;
        }
    return 0;
}

