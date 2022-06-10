#include <stdio.h>

int main() {

    int A,B,C,D,hour,minute;

        scanf("%d %d %d %d",&A,&B,&C,&D);

        if(A<C){

            if(B>D){
               hour=C-A-1;
               minute=60-(B-D);
            }

            else if(B<D){
            hour=C-A;
            minute=D-B;
            }

            else if(D==B){
                hour=C-A;
                minute=0;
            }
    }

        else if(A==C){


                if(B==D){
                        hour=24;
                    minute=0;
                }

                else if(B>D){
                        hour=23;
                    minute=60-(B-D);
                }

                else if(B<D){
                        hour=0;
                    minute=D-B;
                }
        }

       else if(A>C){

            if(B<D){
               hour=24-(A-C);
               minute=D-B;
            }

            else if(B>D){
            hour=24-(A-C)-1;
            minute=60-(B-D);
            }

            else if(D==B){
                hour=24-(A-C);
                minute=0;
            }
    }


        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minute);



    return 0;
}
