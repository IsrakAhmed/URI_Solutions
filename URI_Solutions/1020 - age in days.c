#include<stdio.h>

    int main(){

        int N,year,month,day,a;

        scanf("%d",&N);

        year=N/365;
        a=N%365;

        month=a/30;
        a=a%30;

        day=a;

        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);



  return 0;

    }//end of main
