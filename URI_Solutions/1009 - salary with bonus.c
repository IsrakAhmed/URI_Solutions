#include<stdio.h>
#include<string.h>


    main(){

        char NAME[10];

        float salary;

        double sellings,TOTAL;

        gets(NAME);

        scanf("%f%lf",&salary,&sellings);

        TOTAL=((sellings*0.15)+salary);

        printf("TOTAL = R$ %0.2lf\n",TOTAL);

  return 0;
    }
