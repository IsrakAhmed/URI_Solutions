#include<stdio.h>

    int main(){

        int A,B,duration;

        scanf("%d%d",&A,&B);

        if(B<A){

            duration=((24-A)+B);
        }

        else if(A==B){

            duration=24;
        }

        else if(B>A){

            duration=B-A;
        }

        printf("O JOGO DUROU %d HORA(S)\n",duration);


    return 0;
    }
