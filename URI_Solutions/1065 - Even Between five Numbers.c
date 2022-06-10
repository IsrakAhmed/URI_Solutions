#include<stdio.h>

    int main(){

        int x,y,z,w,u,i=0;

        scanf("%d%d%d%d%d",&x,&u,&y,&z,&w);

        if(x%2==0){
            i++;
        }
        if(z%2==0){
            i++;
        }
        if(y%2==0){
            i++;
        }
        if(w%2==0){
            i++;
        }
        if(u%2==0){
            i++;
        }

        printf("%d valores pares\n",i);


 return 0;
    }
