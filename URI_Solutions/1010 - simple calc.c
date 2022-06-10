#include<stdio.h>

    int main(){

        int product_code1,unit1,product_code2,unit2;
        float price1,price2,VALOR_A_PAGAR;

        scanf("%d %d %f",&product_code1, &unit1, &price1);
        scanf("%d %d %f",&product_code2, &unit2, &price2);


        VALOR_A_PAGAR=((unit1*price1)+(unit2*price2));

        printf("VALOR A PAGAR: R$ %0.2f\n",VALOR_A_PAGAR);


  return 0;

    }
