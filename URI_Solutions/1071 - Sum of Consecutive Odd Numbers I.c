#include<stdio.h>

    int main(){

        int X,Y,i,j=0;

        scanf("%d%d",&X,&Y);

        for(i=X; i>Y+1; i--){
            if(i%2==0){
                j+=i-1;
            }
        }
        printf("%d\n",j);

  return 0;
    }
