#include<stdio.h>
#include<math.h>

    int main(){

        float A,B,C,R1,R2,x;

        scanf("%f%f%f",&A,&B,&C);

        x=(B*B)-(4*A*C);

        if(A==0)
        {
            printf("Impossivel calcular\n");
        }

        else if(x<=0)
        {
            printf("Impossivel calcular\n");
        }


        else
        {
            x=sqrt((B*B)-(4*A*C));
            R1=(-B+x)/(2*A);
            R2=(-B-x)/(2*A);

            printf("R1 = %0.5f\n",R1);
            printf("R2 = %0.5f\n",R2);
        }

  return 0;
    }//end of main
