#include<stdio.h>

    int main() {

        int s100,s50,s20,s10,s5,s2,s1,sp50,sp25,sp10,sp05,sp01,n;
        double N;

        scanf("%lf",&N);
        printf("NOTAS:\n");

        n=N*100;

        s100=n/10000;
        printf("%d nota(s) de R$ 100.00\n",s100);
        n=n%10000;

        s50=n/5000;
        printf("%d nota(s) de R$ 50.00\n",s50);
        n=n%5000;

        s20=n/2000;
        printf("%d nota(s) de R$ 20.00\n",s20);
        n=n%2000;

        s10=n/1000;
        printf("%d nota(s) de R$ 10.00\n",s10);
        n=n%1000;

        s5=n/500;
        printf("%d nota(s) de R$ 5.00\n",s5);
        n=n%500;

        s2=n/200;
        printf("%d nota(s) de R$ 2.00\n",s2);
        N=n%200;

        printf("MOEDAS:\n");

        s1=n/100;
        printf("%d moeda(s) de R$ 1.00\n",s1);
        n=n%100;

        sp50=n/50;
        printf("%d moeda(s) de R$ 0.50\n",sp50);
        n=n%50;

        sp25=n/25;
        printf("%d moeda(s) de R$ 0.25\n",sp25);
        n=n%25;

        sp10=n/10;
        printf("%d moeda(s) de R$ 0.10\n",sp10);
        n=n%10;

        sp05=n/5;
        printf("%d moeda(s) de R$ 0.05\n",sp05);
        n=n%5;

        sp01=n/1;
        printf("%d moeda(s) de R$ 0.01\n",sp01);




  return 0;
    }//end of main
