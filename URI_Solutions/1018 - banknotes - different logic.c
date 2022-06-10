#include<stdio.h>

    int main() {

        int N,i,j,notes[7]={100,50,20,10,5,2,1};
        int nb[7];

        0 < N < 1000000;

        scanf("%d",&N);
        printf("%d\n",N);

        for(i=0; i<7; i++)
        {
            nb[i]=N/notes[i];
            N=N%notes[i];

        }//end of 1st for loop

        for(j=0; j<7; j++)
        {
            printf("%d nota(s) de R$ %d,00\n",nb[j],notes[j]);

        }//end of 2nd for loop


  return 0;
    }//end of main

