#include<stdio.h>

    int main(){

        float X,me=0;

        scanf("%f",&X);

        if(0<=X && X<=400.00){
                me=X*0.15;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %c\n",X+me,me,37);
        }

        else if(400.01<=X && X<=800.00){
                me=X*0.12;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %c\n",X+me,me,37);
        }

        else if(800.01<=X && X<=1200.00){
                me=X*0.10;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %c\n",X+me,me,37);
        }

        else if(1200.01<=X && X<=2000.00){
                me=X*0.07;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %c\n",X+me,me,37);
        }

        else if(X>2000.00){
                me=X*0.04;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %c\n",X+me,me,37);
        }

 return 0;
    }
