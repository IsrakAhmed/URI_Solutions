#include<stdio.h>

    int main(){

        int i,j;

        for(i=1; i<=9; i++){

                if(i%2==0){
                    continue;
                }

                else {
            for(j=i+6; j>=i+4; j--){
                printf("I=%d J=%d\n",i,j);
            }
        }
    }

 return 0;
    }
