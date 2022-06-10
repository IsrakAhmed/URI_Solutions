#include<stdio.h>

    int main(){

        int i,x;

        scanf("%d",&x);

        for(i=x; i<=x+10; i++){
            if(i%2==0){
                printf("%d\n",i+1);
            }
        }

  return 0;
    }

