#include<stdio.h>


    void decending(double number[]);
    void check(double x, double y, double z);

    int main(){

        double A,B,C,tri[3];

        decending(tri);

        A=tri[0];
        B=tri[1];
        C=tri[2];

        if (A >= (B+C)){
            printf("NAO FORMA TRIANGULO\n");
            check(A,B,C);
    }

        else if ((A*A) == ((B*B) + (C*C))){
            printf("TRIANGULO RETANGULO\n");
            check(A,B,C);
    }

        else if ((A*A) > ((B*B) + (C*C))){
            printf("TRIANGULO OBTUSANGULO\n");
            check(A,B,C);
    }

        else if ((A*A) < ((B*B) + (C*C))){
            printf("TRIANGULO ACUTANGULO\n");
            check(A,B,C);
    }


   return 0;
    }

    void check(double A, double B, double C){

        if (A==B && B==C){
            printf("TRIANGULO EQUILATERO\n");
        }

        if ((A==B && B!=C) || (B==C && C!=A) || (C==A && A!=B)){
            printf("TRIANGULO ISOSCELES\n");
        }

    }

    void decending(double number[]){

        int i, j;

        double temp=0;

        for (i=0; i<3; i++)
        {
            scanf("%lf",&number[i]);
        }

        for (i=0; i <3; i++)
        {

            for (j=i+1; j<3; j++)
            {

                if (number[i] < number[j])
                {
                    temp =  number[i];
                    number[i] = number[j];
                    number[j] = temp;
                }
            }
        }
    }
