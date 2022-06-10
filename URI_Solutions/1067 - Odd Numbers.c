#include<stdio.h>

    int main(){

       int X,i;

       scanf("%d",&X);

       printf("1\n");

       for(i=1; i<X; i++){
         if(i%2==0){
            printf("%d\n",i+1);
         }
       }


  return 0;
    }
